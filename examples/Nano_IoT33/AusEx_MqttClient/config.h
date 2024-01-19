#define USE_WIFI
#define USE_RTC
#define USE_PCF8523
#define USE_COLOR_LED
#define LED_DATA_PIN 7
#define LED_CLK_PIN 6
#define LED_DURATION 3000
#define LED_SHORT_DURATION 1000
#define SD_CHIP_SELECT 10
#define WDT_DURATION 20000
#define WDT_SHORT_DURATION 500
#define SERIAL_SPEED 9600
#define HOSTNAME "Nano_IoT33"
#define APP_NAME "AusEx_mqtt_client"
#define USE_LOG_FILE
#define LOGFILE_NAME_HEAD "/syslog"
#define LOG_FILE_SIZE_MAX 10000000
#define USE_LOG_SERIAL
#define SSID_STR "Buffalo-G-9C50"
#define WIFI_PASS "jxgdekvmujfyh"
#define FIX_MAC_ADDRESS 0x90, 0xa2, 0xda, 0x10, 0x11, 0x51
#define USE_DHCP
#define SELF_IP_ADDRESS 192, 168, 1, 111
#define DNS_SERVER_ADDRESS 192, 168, 1, 254
#define GATEWAY_ADDRESS 192, 168, 1, 254
#define NETMASK 255, 255, 255, 0
#define MQTT_MESSAGE_FORMAT FORMAT_TYPE_PLAIN_TEXT
#define MQTT_AUTH_USERNAME "foo"
#define MQTT_AUTH_PASSWORD "bar"
#define MQTT_TOPIC "arduino/echo"
#define MQTT_SERVER_ADDR "192.168.1.254"
#define MQTT_PORT 1883
#define USE_WDT
#define MAX_SLEEP_DURATION 15000
#define SLEEP_MODE MODE_PWR_DOWN
#define USE_SENSOR_ADXL345
#define ADXL_INTER_I2C
#define ADXL345_DATA_RATE AUSEX_ADXL345_DATARATE_100_HZ
#define ADXL345_RANGE AUSEX_ADXL345_RANGE_2_G
#define SENSOR_ID_ADXL345 -1