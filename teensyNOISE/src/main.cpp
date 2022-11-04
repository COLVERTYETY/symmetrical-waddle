#include <Arduino.h>

#define buffersize 10000

#define input A0
#define output 13

int buffer[buffersize];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(output, OUTPUT);
  pinMode(input, INPUT);
}

void loop() {
  // // put your main code here, to run repeatedly:
  // for (int i = 0; i < buffersize; i++) {
  //   buffer[i] = analogRead(input);
  // }
  // // for (int i = 0; i < buffersize; i++) {
  // //   Serial.print("hz: ");
  // //   Serial.println(buffer[i]);
  // // }
  // // Serial.println("_________________end_____________");
  // for(int i = 0; i < buffersize; i++){
  //   analogWrite(output, buffer[i]);
  // }
  // analogWrite(output, 0);
  int val = analogRead(input);
  analogWrite(output, val);
  Serial.print("hz: ");
  Serial.println(val);
  delay(100);
}