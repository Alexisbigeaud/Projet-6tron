/*
 * mbed SDK
 * Copyright (c) 2017 ARM Limited
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

// Automatically generated configuration file.
// DO NOT EDIT, content will be overwritten.

#ifndef __MBED_CONFIG_DATA__
#define __MBED_CONFIG_DATA__

// Configuration parameters
#define CLOCK_SOURCE                                                          USE_PLL_MSI                                                                                      // set by target:ZEST_CORE_STM32L4A6RG
#define LPTICKER_DELAY_TICKS                                                  0                                                                                                // set by target:MCU_STM32L4
#define MBED_CONF_ATMEL_RF_ASSUME_SPACED_SPI                                  1                                                                                                // set by library:atmel-rf[STM]
#define MBED_CONF_ATMEL_RF_FULL_SPI_SPEED                                     7500000                                                                                          // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_FULL_SPI_SPEED_BYTE_SPACING                        250                                                                                              // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_I2C_SCL                                            I2C1_SCL                                                                                         // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_I2C_SDA                                            I2C1_SDA                                                                                         // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_IRQ_THREAD_STACK_SIZE                              1024                                                                                             // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_LOW_SPI_SPEED                                      3750000                                                                                          // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_PROVIDE_DEFAULT                                    1                                                                                                // set by application[*]
#define MBED_CONF_ATMEL_RF_SPI_CS                                             SPI1_CS                                                                                          // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_SPI_IRQ                                            PA_10                                                                                            // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_SPI_MISO                                           SPI1_MISO                                                                                        // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_SPI_MOSI                                           SPI1_MOSI                                                                                        // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_SPI_RST                                            PB_0                                                                                             // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_SPI_SCLK                                           SPI1_SCK                                                                                         // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_SPI_SLP                                            PB_4                                                                                             // set by application[ZEST_CORE_STM32L4A6RG]
#define MBED_CONF_ATMEL_RF_USE_SPI_SPACING_API                                0                                                                                                // set by library:atmel-rf
#define MBED_CONF_DRIVERS_OSPI_CSN                                            OSPI_FLASH1_CSN                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_DQS                                            OSPI_FLASH1_DQS                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO0                                            OSPI_FLASH1_IO0                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO1                                            OSPI_FLASH1_IO1                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO2                                            OSPI_FLASH1_IO2                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO3                                            OSPI_FLASH1_IO3                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO4                                            OSPI_FLASH1_IO4                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO5                                            OSPI_FLASH1_IO5                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO6                                            OSPI_FLASH1_IO6                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO7                                            OSPI_FLASH1_IO7                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_SCK                                            OSPI_FLASH1_SCK                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_CSN                                            QSPI_FLASH1_CSN                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO0                                            QSPI_FLASH1_IO0                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO1                                            QSPI_FLASH1_IO1                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO2                                            QSPI_FLASH1_IO2                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO3                                            QSPI_FLASH1_IO3                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_SCK                                            QSPI_FLASH1_SCK                                                                                  // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE                              256                                                                                              // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE                              256                                                                                              // set by library:drivers
#define MBED_CONF_EVENTS_PRESENT                                              1                                                                                                // set by library:events
#define MBED_CONF_EVENTS_SHARED_DISPATCH_FROM_APPLICATION                     0                                                                                                // set by library:events
#define MBED_CONF_EVENTS_SHARED_EVENTSIZE                                     768                                                                                              // set by library:events
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_EVENTSIZE                            256                                                                                              // set by library:events
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_STACKSIZE                            1024                                                                                             // set by library:events
#define MBED_CONF_EVENTS_SHARED_STACKSIZE                                     2048                                                                                             // set by library:events
#define MBED_CONF_EVENTS_USE_LOWPOWER_TIMER_TICKER                            0                                                                                                // set by library:events
#define MBED_CONF_FLASHIAP_BLOCK_DEVICE_BASE_ADDRESS                          0xFFFFFFFF                                                                                       // set by library:flashiap-block-device
#define MBED_CONF_FLASHIAP_BLOCK_DEVICE_SIZE                                  0                                                                                                // set by library:flashiap-block-device
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL                            12                                                                                               // set by application[*]
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL_MASK                       0x7fff800                                                                                        // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL_PAGE                       0                                                                                                // set by application[*]
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_DEVICE_TYPE                        NET_6LOWPAN_ROUTER                                                                               // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PANID_FILTER                       0xffff                                                                                           // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PSK_KEY                            {0x43, 0x41, 0x54, 0x49, 0x45, 0x2d, 0x36, 0x74, 0x72, 0x6f, 0x6e, 0x2d, 0x32, 0x30, 0x31, 0x37} // set by application[*]
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PSK_KEY_ID                         1                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_SECURITY_MODE                      PSK                                                                                              // set by application[*]
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_SEC_LEVEL                          5                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_HEAP_SIZE                                     32500                                                                                            // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_HEAP_STAT_INFO                                NULL                                                                                             // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_MAC_NEIGH_TABLE_SIZE                          32                                                                                               // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_RADIUS_RETRY_COUNT                            3                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_RADIUS_RETRY_IMAX                             30                                                                                               // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_RADIUS_RETRY_IMIN                             20                                                                                               // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_SYSTEM_TIME_UPDATE_FROM_NANOSTACK             1                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL                         22                                                                                               // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL_MASK                    0x7fff800                                                                                        // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL_PAGE                    0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_COMMISSIONING_DATASET_TIMESTAMP 0x10000                                                                                          // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_EXTENDED_PANID                  {0xf1, 0xb5, 0xa1, 0xb2,0xc4, 0xd5, 0xa1, 0xbd }                                                 // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_ML_PREFIX                       {0xfd, 0x0, 0x0d, 0xb8, 0x0, 0x0, 0x0, 0x0}                                                      // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_NETWORK_NAME                    "Thread Network"                                                                                 // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_PANID                           0x0700                                                                                           // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_PSKC                            {0xc8, 0xa6, 0x2e, 0xae, 0xf3, 0x68, 0xf3, 0x46, 0xa9, 0x9e, 0x57, 0x85, 0x98, 0x9d, 0x1c, 0xd0} // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_DEVICE_TYPE                            MESH_DEVICE_TYPE_THREAD_ROUTER                                                                   // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_MASTER_KEY                             {0x10, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff} // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_PSKD                                   "ABCDEFGH"                                                                                       // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_SECURITY_POLICY                        255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_USE_STATIC_LINK_CONFIG                 1                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_USE_MALLOC_FOR_HEAP                           0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_CHANNEL_FUNCTION                     255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_DWELL_INTERVAL                       0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_FIXED_CHANNEL                        65535                                                                                            // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_INTERVAL                             0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_CHANNEL_PLAN_ID                         255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_DEVICE_TYPE                             MESH_DEVICE_TYPE_WISUN_ROUTER                                                                    // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_NETWORK_NAME                            "Wi-SUN Network"                                                                                 // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_OPERATING_CLASS                         255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_OPERATING_MODE                          255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_PHY_MODE_ID                             255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_REGULATORY_DOMAIN                       3                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_UC_CHANNEL_FUNCTION                     255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_UC_DWELL_INTERVAL                       255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_UC_FIXED_CHANNEL                        65535                                                                                            // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MQTT_MAX_CONNECTIONS                                   5                                                                                                // set by application[*]
#define MBED_CONF_MBED_MQTT_MAX_PACKET_SIZE                                   1024                                                                                             // set by application[*]
#define MBED_CONF_MBED_MQTT_TESTS_BROKER_HOSTNAME                             "192.168.8.52"                                                                                   // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_MQTT_SN_ENABLE                              false                                                                                            // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_PASSWORD                                    "1234"                                                                                           // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_PUBLIC_TOPIC_ENABLE                         false                                                                                            // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_PUBLIC_TOPIC_NAME                           "mbed_public_test_topic"                                                                         // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_TLS_ENABLE                                  false                                                                                            // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_TOPIC                                       "test"                                                                                           // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_USERNAME                                    "mbed"                                                                                           // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_USERNAME_ALWAYS                             false                                                                                            // set by library:mbed-mqtt
#define MBED_CONF_MBED_MQTT_TESTS_USERNAME_PASSWORD_PROTECTION_ENABLE         false                                                                                            // set by library:mbed-mqtt
#define MBED_CONF_MCR20A_PROVIDE_DEFAULT                                      0                                                                                                // set by library:mcr20a
#define MBED_CONF_NANOSTACK_CONFIGURATION                                     lowpan_router                                                                                    // set by application[*]
#define MBED_CONF_NANOSTACK_HAL_CRITICAL_SECTION_USABLE_FROM_INTERRUPT        0                                                                                                // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_DISPATCH_FROM_APPLICATION          0                                                                                                // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_THREAD_STACK_SIZE                  6144                                                                                             // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_USE_MBED_EVENTS                    0                                                                                                // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_KVSTORE_PATH                                  "/kv/"                                                                                           // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_USE_KVSTORE                                   0                                                                                                // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_LIBSERVICE_NSDYNMEM_TRACKER_ENABLED               0                                                                                                // set by library:nanostack-libservice
#define MBED_CONF_NANOSTACK_LIBSERVICE_PRESENT                                1                                                                                                // set by library:nanostack-libservice
#define MBED_CONF_NSAPI_ADD_EVENT_LISTENER_RETURN_CHANGE                      0                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_DEFAULT_MESH_TYPE                                     LOWPAN                                                                                           // set by application[*]
#define MBED_CONF_NSAPI_DEFAULT_STACK                                         LWIP                                                                                             // set by library:nsapi
#define MBED_CONF_NSAPI_DEFAULT_WIFI_SECURITY                                 NONE                                                                                             // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_ADDRESSES_LIMIT                                   10                                                                                               // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_CACHE_SIZE                                        3                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_RESPONSE_WAIT_TIME                                10000                                                                                            // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_RETRIES                                           1                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_TOTAL_ATTEMPTS                                    10                                                                                               // set by library:nsapi
#define MBED_CONF_NSAPI_PRESENT                                               1                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_SOCKET_STATS_ENABLED                                  0                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_SOCKET_STATS_MAX_COUNT                                10                                                                                               // set by library:nsapi
#define MBED_CONF_PLATFORM_CALLBACK_COMPARABLE                                1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_CALLBACK_NONTRIVIAL                                1                                                                                                // set by application[*]
#define MBED_CONF_PLATFORM_CRASH_CAPTURE_ENABLED                              0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_CTHUNK_COUNT_MAX                                   8                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_DEEPSLEEP_STATS_VERBOSE                            0                                                                                                // set by library:platform[STM]
#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE                           9600                                                                                             // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_ALL_THREADS_INFO                             0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_FILENAME_CAPTURE_ENABLED                     0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_ENABLED                                 0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_SIZE                                    4                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_REBOOT_MAX                                   1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_FATAL_ERROR_AUTO_REBOOT_ENABLED                    0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_MAX_ERROR_FILENAME_LEN                             16                                                                                               // set by library:platform
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_ENABLE_64_BIT                       1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_ENABLE_FLOATING_POINT               1                                                                                                // set by application[*]
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_SET_FLOATING_POINT_MAX_DECIMALS     6                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_POLL_USE_LOWPOWER_TIMER                            0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE                                    9600                                                                                             // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL                              0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES                             1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES                         1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT                                1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_MINIMAL_CONSOLE_ONLY                         0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_USE_MPU                                            1                                                                                                // set by library:platform
#define MBED_CONF_PPP_ENABLED                                                 0                                                                                                // set by library:ppp
#define MBED_CONF_PPP_ENABLE_TRACE                                            0                                                                                                // set by library:ppp
#define MBED_CONF_PPP_IPV4_ENABLED                                            1                                                                                                // set by library:ppp
#define MBED_CONF_PPP_IPV6_ENABLED                                            0                                                                                                // set by library:ppp
#define MBED_CONF_PPP_MBED_EVENT_QUEUE                                        0                                                                                                // set by library:ppp
#define MBED_CONF_PPP_THREAD_STACKSIZE                                        816                                                                                              // set by library:ppp
#define MBED_CONF_RTOS_API_PRESENT                                            1                                                                                                // set by library:rtos-api
#define MBED_CONF_RTOS_ENABLE_ALL_RTX_EVENTS                                  0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_EVFLAGS_NUM                                            0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE                                 512                                                                                              // set by library:rtos
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE_DEBUG_EXTRA                     128                                                                                              // set by library:rtos[STM]
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE_TICKLESS_EXTRA                  256                                                                                              // set by library:rtos
#define MBED_CONF_RTOS_MAIN_THREAD_STACK_SIZE                                 4096                                                                                             // set by library:rtos
#define MBED_CONF_RTOS_MSGQUEUE_DATA_SIZE                                     0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_MSGQUEUE_NUM                                           0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_MUTEX_NUM                                              0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_PRESENT                                                1                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_SEMAPHORE_NUM                                          0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_THREAD_NUM                                             0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_THREAD_STACK_SIZE                                      4096                                                                                             // set by library:rtos
#define MBED_CONF_RTOS_THREAD_USER_STACK_SIZE                                 0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_TIMER_NUM                                              0                                                                                                // set by library:rtos
#define MBED_CONF_RTOS_TIMER_THREAD_STACK_SIZE                                768                                                                                              // set by library:rtos
#define MBED_CONF_S2LP_PROVIDE_DEFAULT                                        0                                                                                                // set by library:s2lp
#define MBED_CONF_TARGET_BOOT_STACK_SIZE                                      0x400                                                                                            // set by library:rtos[*]
#define MBED_CONF_TARGET_CONSOLE_UART                                         1                                                                                                // set by target:Target
#define MBED_CONF_TARGET_CUSTOM_TICKERS                                       1                                                                                                // set by target:Target
#define MBED_CONF_TARGET_DEEP_SLEEP_LATENCY                                   4                                                                                                // set by target:MCU_STM32
#define MBED_CONF_TARGET_DEFAULT_ADC_VREF                                     NAN                                                                                              // set by target:Target
#define MBED_CONF_TARGET_GPIO_RESET_AT_INIT                                   0                                                                                                // set by target:MCU_STM32
#define MBED_CONF_TARGET_I2C_TIMING_VALUE_ALGO                                0                                                                                                // set by target:MCU_STM32L4
#define MBED_CONF_TARGET_INIT_US_TICKER_AT_BOOT                               1                                                                                                // set by target:MCU_STM32
#define MBED_CONF_TARGET_INTERNAL_FLASH_UNIFORM_SECTORS                       1                                                                                                // set by target:Target
#define MBED_CONF_TARGET_LPTICKER_LPTIM                                       1                                                                                                // set by target:MCU_STM32L4
#define MBED_CONF_TARGET_LPTICKER_LPTIM_CLOCK                                 1                                                                                                // set by target:MCU_STM32
#define MBED_CONF_TARGET_LPUART_CLOCK_SOURCE                                  USE_LPUART_CLK_LSE                                                                               // set by target:MCU_STM32L4A6xG
#define MBED_CONF_TARGET_LSE_AVAILABLE                                        1                                                                                                // set by target:MCU_STM32
#define MBED_CONF_TARGET_LSE_DRIVE_LOAD_LEVEL                                 RCC_LSEDRIVE_LOW                                                                                 // set by target:MCU_STM32L4
#define MBED_CONF_TARGET_MPU_ROM_END                                          0x0fffffff                                                                                       // set by target:Target
#define MBED_CONF_TARGET_NETWORK_DEFAULT_INTERFACE_TYPE                       MESH                                                                                             // set by application[*]
#define MBED_CONF_TARGET_RTC_CLOCK_SOURCE                                     USE_RTC_CLK_LSE_OR_LSI                                                                           // set by target:MCU_STM32
#define MBED_CONF_TARGET_TICKLESS_FROM_US_TICKER                              0                                                                                                // set by target:Target
#define MBED_CONF_TARGET_USB_SPEED                                            USE_USB_OTG_FS                                                                                   // set by target:ZEST_CORE_STM32L4A6RG
#define MBED_CONF_TARGET_XIP_ENABLE                                           0                                                                                                // set by target:Target
#define MBED_CRC_TABLE_SIZE                                                   16                                                                                               // set by library:drivers
#define MBED_STACK_DUMP_ENABLED                                               0                                                                                                // set by library:platform
#define MBED_TRACE_COLOR_THEME                                                0                                                                                                // set by library:mbed-trace
#define MEM_ALLOC                                                             malloc                                                                                           // set by library:mbed-trace
#define MEM_FREE                                                              free                                                                                             // set by library:mbed-trace
#define PPP_DEBUG                                                             0                                                                                                // set by library:ppp
// Macros
#define NSAPI_PPP_AVAILABLE                                                   (MBED_CONF_PPP_ENABLED || MBED_CONF_LWIP_PPP_ENABLED)                                            // defined by library:ppp
#define NSDYNMEM_TRACKER_ENABLED                                              MBED_CONF_NANOSTACK_LIBSERVICE_NSDYNMEM_TRACKER_ENABLED                                          // defined by library:nanostack-libservice
#define NS_USE_EXTERNAL_MBED_TLS                                                                                                                                               // defined by library:nanostack
#define UNITY_INCLUDE_CONFIG_H                                                                                                                                                 // defined by library:utest
#define _RTE_                                                                                                                                                                  // defined by library:rtos

#endif
