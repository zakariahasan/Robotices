#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int cnt = 0;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  myservo.write(0);              // tell servo to go to position '0' degree
  cnt = 60; // slow blink

  while (cnt--) {
    Serial.println(cnt, DEC);
    digitalWrite(13, !digitalRead(13));
    delay(1000);
  }
  myservo.write(180);              // tell servo to go to position '180' degree

  cnt = 120; // fast blink

  while (cnt--) {
    Serial.println(cnt, DEC);
    digitalWrite(13, !digitalRead(13));
    delay(500);
  }
}
