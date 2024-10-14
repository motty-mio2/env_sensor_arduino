#ifndef ENVHEADER
#define ENVHEADER

#ifdef BOARD_ESP32

// I2C
#define I2C_SDA 21
#define I2C_SCL 22

// SPI
#define SPI_MOSI 32
#define SPI_SCK 33
#define SPI_CS 25
#define SPI_DC 26
#define SPI_RST 27
#define SPI_BUSY 18

// Current Sensor
#define SENSE_CURRENT1 23

// BME280
#define ADDR_BME280_0 0x76
#define SEALEVELPRESSURE_HPA (1013.25)

// MH-Z19
#define MH_Z19_TX 17
#define MH_Z19_RX 16

// Servo Pins
#define SERVO_PIN_0 13
#define SERVO_PIN_1 12
#define SERVO_PIN_2 15
#define SERVO_PIN_3 14

// LED Pins
#define LED_PIN_1 4
#define LED_PIN_2 5
#define LED_PIN_3 19
#endif  // BOARD_ESP32

#ifdef BOARD_ESP32S3

// SPI
#define SPI_MOSI 15
#define SPI_SCK 46
#define SPI_CS 9
#define SPI_DC 10
#define SPI_RST 11
#define SPI_BUSY 18

// Current Sensor
#define SENSE_CURRENT1 1
#define SENSE_CURRENT2 2

// MH-Z19
#define MH_Z19_TX 4
#define MH_Z19_RX 5

// Servo Pins
#define SERVO_PIN_0 45
#define SERVO_PIN_1 48
#define SERVO_PIN_2 47
#define SERVO_PIN_3 21

// LED Pins
#define LED_PIN_1 4
#define LED_PIN_2 5
#define LED_PIN_3 19

#endif  // BOARD_ESP32S3

#endif  // ENV_HEADER
