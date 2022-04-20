#include <ArduinoRS485.h>
#define SERIAL_PORT_HARDWARE Serial3

void setup() {
  RS485.setSerial(&SERIAL_PORT_HARDWARE);
  Serial3.begin(9600);
  Serial.begin(9600); // Not neccessary unless one needs this port for messages
}

void loop(){;}
