#include <Wire.h>
#include <LiquidCrystal_I2C.h>

  LiquidCrystal_I2C mylcd (0x27,16,2);   //首地址  用前十六个地址，2行
void setup() {
  // put your setup code here, to run once:
mylcd.init();
mylcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
mylcd.setCursor(0,0);             //位置
mylcd.print("Hello Human!");      //显示   
mylcd.setCursor(0,1);
mylcd.print("Come om!");
}
