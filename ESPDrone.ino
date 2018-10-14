/*-------------------------------------------------------------*/
/*-------------------------------------------------------------*/
/*--          ESP32/M5Stack Camera Bicopter Drone            --*/
/*-------------------------------------------------------------*/
/*--               Created by AETT Technology                --*/
/*--                   Code by Adam Bryant                   --*/
/*-------------------------------------------------------------*/
/*-------------------------------------------------------------*/
/*-- ESP uses two I2C ports. Port 1 connects to the Sensor, and Port 2 to the motor Driver  --*/
/*-------------------------------------------------------------*/
/*----------  Todo List  --------------------------------------*/
// 1 Initialise ESP32 module,
//      Configure HTML Page for camera display and control
// 2 Initialise I2C Ports,
// 3 Get Data from Gyro (MPU6050),
//      Display Gyro data on webpage,
// 4 Configure external driver hardware through Grove I2C port.
// 5 Initialise camera on SPI Bus
//      Forward Camera data to Webpage,
// 6 Convert C code to registry calls.
// 7 PID Feedback loop to control balance required.
// Port code to expressive idf?

//  Microphone = G2 (Data), G4 (Clk)
// I2C1 [master] MPU6050 = G22 (Data), G23 (CLK) 0x68
// I2C1 [master] BME280 = G22 (Data), G23 (CLK) 0x77
// I2C0 [master] Grove = G12 (Data), G13 (CLK)
#include <M5Stack.h>
#include <Wire.h>

HardwareSerial Serial1(0);
HardwareSerial Serial2(1);

void setup() {
   Serial1.begin(115200, SERIAL_8N1, G22, G23); // Internal I2C connections.
  // Serial2.begin(unsigned long baud, uint32_t config, int8_t rxPin, int8_t txPin, bool invert)
  Serial2.begin(115200, SERIAL_8N1, G12, G13); //External "Grove" I2C connections

}

void loop() {
  // put your main code here, to run repeatedly:

}
