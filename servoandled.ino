#include <Servo.h>

const int led = 6;
const int button = 4;
int level = 255;
const int servo = 10;
int servolevel = 0;
Servo servo1;
void setup() {
  // put your setup code here, to run once:

  pinMode(button, INPUT);
  servo1.attach(servo);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(button) == HIGH) {




    if (level < 255) {

      level = level - 10;

    }
    else {

      level = 0;
    }

    if (servolevel < 180) {

      servolevel = servolevel + 10;

    }

    else
    {
      servolevel = 0;

    }




    servo1.write(servolevel);
    analogWrite(led, level);





    delay(100);
  }


}
