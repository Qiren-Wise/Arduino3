
#include <Stepper.h>

Stepper mystepper(100,1,2,3,4);

void setup(){
  pinMode(5, INPUT);
  mystepper.setSpeed(10);
}

void loop(){
  if (digitalRead(5) == false)   //声控/热敏/循迹/触摸/红外/倾斜等
  {
    mystepper.step(10);

  } else {
    mystepper.step(0);

  }

}
