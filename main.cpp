/*
 * Copyright (c) 2020, CATIE
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "mbed.h"
#include <nsapi_dns.h>
#include <MQTTClientMbedOs.h>
#include "BME280.h"

//namespace sixtron 
using namespace sixtron;

namespace {

#define IO_USERNAME  "ARAHARA"
#define IO_KEY       "aio_FWuu99W6kBGdYqeaPNTA3FNGZ3qV"
#define MQTT_CLIENT_ID "6TRONzedboard"
#define MQTT_TOPIC_SUBSCRIBE "ARAHARA/feeds/led"
#define MQTT_TOPIC_PUBLISH "ARAHARA/feeds"
#define SYNC_INTERVAL           1

#define TICKER_PERIOD 8000ms
}

// Peripherals
static DigitalOut led(LED1);
static InterruptIn button(BUTTON1);
I2C bus(I2C1_SDA, I2C1_SCL);
BME280 sensor(&bus);
Ticker ticker;// Ticker
EventQueue queue;// Event queue
Thread eventThread;// Thread

uint64_t now = Kernel::get_ms_count();
uint64_t later = Kernel::get_ms_count();


// Network
NetworkInterface *network;
MQTTClient *client;

// MQTT
// const char* hostname = "fd9f:590a:b158::1";
const char* hostname = "io.adafruit.com";
int port = 1883;

// Error code
nsapi_size_or_error_t rc = 0;

// Event queue
static int id_yield;
static EventQueue main_queue(32 * EVENTS_EVENT_SIZE);

/*!
 *  \brief Called when a message is received
 *
 *  Print messages received on mqtt topic
 */
void messageArrived(MQTT::MessageData& md)
{
    MQTT::Message &message = md.message;
    printf("Message arrived: qos %d, retained %d, dup %d, packetid %d\r\n", message.qos, message.retained, message.dup, message.id);
    printf("Payload %.*s\r\n", message.payloadlen, (char*)message.payload);

    // Get the payload string
    char* char_payload = (char*)malloc((message.payloadlen+1)*sizeof(char)); // allocate the necessary size for our buffer
    char_payload = (char *) message.payload; // get the arrived payload in our buffer
    char_payload[message.payloadlen] = '\0'; // String must be null terminated

    if (strcmp(char_payload, "LED") == 0) {
        led = !led;
        printf("LED");
    }
}

/*!
 *  \brief Yield to the MQTT client
 *
 *  On error, stop publishing and yielding
 */
static void yield(){
    // printf("Yield\n");
    
    rc = client->yield(100);

    if (rc != 0){
        printf("Yield error: %d\n", rc);
        main_queue.cancel(id_yield);
        main_queue.break_dispatch();
        system_reset();
    }
}

/*!
 *  \brief Publish data over the corresponding adafruit MQTT topic
 *
 */
void temp_hum() {
    float temperature = sensor.temperature();
    char mqttPayloadTemp[20];
    int charsWrittenTemp = snprintf(mqttPayloadTemp, sizeof(mqttPayloadTemp), "%f", temperature);
    later = Kernel::get_ms_count();
    if (later - now < 1000) {
        ThisThread::sleep_for(1000-(later-now));
        printf("Sleep for %d ms\n", 1000-(later-now));
    }
    MQTT::Message messageTemp;
    messageTemp.qos = MQTT::QOS1;
    messageTemp.retained = false;
    messageTemp.dup = false;
    messageTemp.payload = (void*)mqttPayloadTemp;
    messageTemp.payloadlen = strlen(mqttPayloadTemp);

    printf("Send: %s to MQTT Broker: %s\n", mqttPayloadTemp, hostname);
    rc = client->publish(MQTT_TOPIC_PUBLISH"/Temperature", messageTemp);
    if (rc != 0) {
        printf("Failed to publish Temperature: %d\n", rc);
    }
    now = Kernel::get_ms_count();

    ThisThread::sleep_for(4000ms);

    float humidity = sensor.humidity();
    char mqttPayloadHum[20];
    int charsWrittenHum = snprintf(mqttPayloadHum, sizeof(mqttPayloadHum), "%f", humidity);

    later = Kernel::get_ms_count();
    if (later - now < 1000) {
        ThisThread::sleep_for(1000-(later-now));
        printf("Sleep for %d ms\n", 1000-(later-now));
    }
    
    MQTT::Message messageHum;
    messageHum.qos = MQTT::QOS1;
    messageHum.retained = false;
    messageHum.dup = false;
    messageHum.payload = (void*)mqttPayloadHum;
    messageHum.payloadlen = strlen(mqttPayloadHum);

    printf("Send: %s to MQTT Broker: %s\n", mqttPayloadHum, hostname);
    rc = client->publish(MQTT_TOPIC_PUBLISH"/Humidity", messageHum);
    if (rc != 0) {
        printf("Failed to publish Humidity: %d\n", rc);
    }
    now = Kernel::get_ms_count();
}

static int8_t publish() {
    float pressure = sensor.pressure();

    char mqttPayloadPressure[20];
    int charsWrittenPressure = snprintf(mqttPayloadPressure, sizeof(mqttPayloadPressure), "%f", pressure);

    uint64_t later = Kernel::get_ms_count();
    if (later - now < 1000) {
        ThisThread::sleep_for(1000-(later-now));
        printf("Sleep for %d ms\n", 1000-(later-now));
    }
    
    later = Kernel::get_ms_count();
    if (later - now < 1000) {
        ThisThread::sleep_for(1000-(later-now));
        printf("Sleep for %d ms\n", 1000-(later-now));
    }
    MQTT::Message messagePressure;
    messagePressure.qos = MQTT::QOS1;
    messagePressure.retained = false;
    messagePressure.dup = false;
    messagePressure.payload = (void*)mqttPayloadPressure;
    messagePressure.payloadlen = strlen(mqttPayloadPressure);

    printf("Send: %s to MQTT Broker: %s Pa\n", mqttPayloadPressure, hostname);
    rc = client->publish(MQTT_TOPIC_PUBLISH"/Pressure", messagePressure);
    if (rc != 0) {
        printf("Failed to publish Pressure: %d\n", rc);
    }
    now = Kernel::get_ms_count();
    return 0;
}
// main() runs in its own thread in the OS
// (note the calls to ThisThread::sleep_for below for delays)

int main()
{
    printf("Connecting to border router...\n");

    /* Get Network configuration */
    network = NetworkInterface::get_default_instance();

    if (!network) {
        printf("Error! No network interface found.\n");
        return 0;
    }

    /* Add DNS */
    nsapi_addr_t new_dns = {
        NSAPI_IPv6,
        { 0xfd, 0x9f, 0x59, 0x0a, 0xb1, 0x58, 0, 0, 0, 0, 0, 0, 0, 0, 0x00, 0x01 }
    };
    nsapi_dns_add_server(new_dns, "LOWPAN");

    /* Border Router connection */
    rc = network->connect();
    if (rc != 0) {
        printf("Error! net->connect() returned: %d\n", rc);
        return rc;
    }

    /* Print IP address */
    SocketAddress a;
    network->get_ip_address(&a);
    printf("IP address: %s\n", a.get_ip_address() ? a.get_ip_address() : "None");

    /* Open TCP Socket */
    TCPSocket socket;
    SocketAddress address;
    network->gethostbyname(hostname, &address);
    address.set_port(port);

    /* MQTT Connection */
    client = new MQTTClient(&socket);
    socket.open(network);
    rc = socket.connect(address);
    if(rc != 0){
        printf("Connection to MQTT broker Failed\n");
        return rc;
    }

    MQTTPacket_connectData data = MQTTPacket_connectData_initializer;
    data.MQTTVersion = 4;
    data.keepAliveInterval = 25;
    data.clientID.cstring = (char*) MQTT_CLIENT_ID;
    data.username.cstring = (char*) IO_USERNAME; // Adafruit username
    data.password.cstring = (char*) IO_KEY; // Adafruit user key

    if (client->connect(data) != 0){
        printf("Connection to MQTT Broker Failed\n");
    }

    printf("Connected to MQTT broker\n");

    /* MQTT Subscribe */
    if ((rc = client->subscribe(MQTT_TOPIC_SUBSCRIBE, MQTT::QOS0, messageArrived)) != 0){
        printf("rc from MQTT subscribe is %d\r\n", rc);
    }
    printf("Subscribed to Topic: %s\n", MQTT_TOPIC_SUBSCRIBE);

    yield();

    // Yield every 1 second
    id_yield = main_queue.call_every(SYNC_INTERVAL * 1000, yield);

    eventThread.start(callback(&queue, &EventQueue::dispatch_forever));
    sensor.initialize();
    sensor.set_sampling();
    ticker.attach(main_queue.event(temp_hum), TICKER_PERIOD);

    // Publish
    button.fall(main_queue.event(publish));

    now = Kernel::get_ms_count();

    main_queue.dispatch_forever();
}