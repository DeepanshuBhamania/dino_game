#include <Servo.h>

int obs = 0;
int backgroundPin = A0, mainPin = A1;
int backgroundValue = 0, mainValue = 0;
Servo servo_9;

void setup() {
  servo_9.attach(9, 500, 2500);
  servo_9.write(12);
  Serial.begin(9600);
}

void loop() {
  delay(30);
  backgroundValue = analogRead(backgroundPin);
  mainValue = analogRead(mainPin);
  if (abs(mainValue - backgroundValue)>6 ) {
    obs++;
    if(obs<=25)
      delay(105);
    else if(obs<=40)
      delay(85);
    servo_9.write(18);
    delay(100);
    servo_9.write(12);
    delay(100);
  }
}
