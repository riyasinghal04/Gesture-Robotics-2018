
#include<SparkFun_ADXL345.h>

ADXL345 adxl=ADXL345(10);

int rightp=2;
int rightn=3;
int leftp=4;
int leftn=5;

int left = -5;
int right = 5;
int front = 31;
int back = -25;


void setup() {


 pinMode(rightp,OUTPUT); //right WHEEL POSITIVE
 pinMode(rightn,OUTPUT); //right WHEEL NEGATIVE
 pinMode(leftp,OUTPUT); //left WHEEL POSITIVE
 pinMode(leftn,OUTPUT); //left WHEEL NEGATIVE
  
Serial.begin(9600);
Serial.println("GESTURE ROBOTICS");
Serial.println();

adxl.powerOn();

adxl.setRangeSetting(16);

adxl.setSpiBit(0);


}

void loop() {
  // put your main code here, to run repeatedly:
int x,y,z;
  adxl.readAccel(&x, &y, &z);

  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.println(z);
   delay(100);

 if(x<left)
 { 
  Serial.println("LEFT");
 digitalWrite(rightp,HIGH);
 digitalWrite(rightn,LOW);
 digitalWrite(leftp,LOW);
 digitalWrite(leftn,LOW);
 delay(1);
 }

 if(x>right)
 {
  Serial.println("RIGHT");
 digitalWrite(rightp,LOW);
 digitalWrite(rightn,LOW);
 digitalWrite(leftp,LOW);
 digitalWrite(leftn,HIGH);
 delay(1);
 }

 if(y>front)
 {
  Serial.println("FORWARD");
 digitalWrite(rightp,HIGH);
 digitalWrite(rightn,LOW);
 digitalWrite(leftp,LOW);
 digitalWrite(leftn,HIGH);
 delay(1);
 } 
 
 if(y<back)
 {
  Serial.println("BACK");
 digitalWrite(rightp,LOW);
 digitalWrite(rightn,HIGH);
 digitalWrite(leftp,HIGH);
 digitalWrite(leftn,LOW);
 delay(1); 
 }


if((x > left) && (x < right) && (y > back) && (y < front))
 {
  Serial.println("STOP");
 digitalWrite(rightp,LOW);
 digitalWrite(rightn,LOW);
 digitalWrite(leftp,LOW);
 digitalWrite(leftn,LOW);
 delay(1);
 }

  
 }

 
