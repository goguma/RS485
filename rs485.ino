#include <SoftwareSerial.h>

String inputString = "";         // a String to hold incoming data
boolean stringComplete = false;  // whether the string is complete
String s;
int count,j;

#define _TX D1
#define _RX D2

SoftwareSerial SerialRS485(_RX, _TX); // RX, TX

void setup() {
  // initialize serial:
  Serial.begin(115200);
  SerialRS485.begin(9600);
  // reserve 200 bytes for the inputString:
  //inputString.reserve(200);

   //s = "\0";
   //s +=char(5);
   //s += "00WSS0104%PW4000F";
   //s +=char(4);
}

void loop() {
  Serial.println("-------------------");
  serialEvent();
  //Serial.println("-------------------");

  //count++;
  //j=count%2;
  //if(j==1) 
  //  s.setCharAt(17,'F');
  //else 
  //  s.setCharAt(17,'0');
  //Serial1.print(s); 
  delay(1000);
}

void serialEvent() {
  // print the string when a newline arrives:
  int num = 0;
  //if (stringComplete) {
    //Serial.println(inputString);
    // clear the string:
    //inputString = "";
    //stringComplete = false;
  //}
  
  //if(Serial.available() == false) 
  //  return;
  if (SerialRS485.available() > 0) {
    // get the new byte:
    //char inChar = (char)Serial.read();
    // add it to the inputString:
    num = SerialRS485.read();
    Serial.print(num, HEX);
    Serial.print('|');
    //inputString += inChar;
  }
  //stringComplete = true;
}
