#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include "MHZ19.h"

#include "envheader.h"

Adafruit_BME280 bme;  // I2C
MHZ19 mhz19;
HardwareSerial mhz19_serial(2);

unsigned long delayTime = 5000;

void setup() {
  Serial.begin(115200);
  Serial.println(F("BME280 test"));

  if (!bme.begin(BME280_ADDRESS, &Wire)) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }

  mhz19_serial.begin(9600, SERIAL_8N1, MH_Z19_RX, MH_Z19_TX);
  mhz19.begin(mhz19_serial);

  Serial.println();
}

void printValues() {
  bme.takeForcedMeasurement();  // has no effect in normal mode
  Serial.printf("Temperature = %f C\n", bme.readTemperature());
  Serial.printf("Pressure = %f hPa\n", bme.readPressure() / 100.0F);
  Serial.printf("Humidity = %f%\n", bme.readHumidity());
  Serial.printf("CO2: %d\n", mhz19.getCO2());
}

void loop() {
  printValues();
  delay(delayTime);
}
