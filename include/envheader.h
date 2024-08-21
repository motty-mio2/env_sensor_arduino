#ifndef ENVHEADER_
#define ENVHEADER_

// I2C
#define I2C_SDA 21
#define I2C_SCL 22

// SPI
#define SPI_DIN 32
#define SPI_SCK 33
#define SPI_CS 25
#define SPI_DC 26
#define SPI_RST 27
#define SPI_BUSY 18

// Current Sensor
#define SENSE_CURRENT 23

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

#endif
