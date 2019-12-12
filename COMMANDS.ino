int rightp=2;
 int rightn=3;
 int leftp=4;
 int leftn=5;


void setup() {
   // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(rightp,OUTPUT); //right WHEEL POSITIVE
  pinMode(rightn,OUTPUT); //right WHEEL NEGATIVE
  pinMode(leftp,OUTPUT); //left WHEEL POSITIVE
  pinMode(leftn,OUTPUT); //left WHEEL NEGATIVE

}

void loop() {

  char command;
  while(!Serial.available());
  command=Serial.read();

  if(command=='f')
  {
    Serial.println("FORWARD");
    digitalWrite(rightp,HIGH);
    digitalWrite(rightn,LOW);
    digitalWrite(leftp,LOW);
    digitalWrite(leftn,HIGH);
    delay(1);
  }
  if(command=='l')
{
Serial.println("LEFT");
digitalWrite(rightp,HIGH);
digitalWrite(rightn,LOW);
digitalWrite(leftp,LOW);
digitalWrite(leftn,LOW);
delay(1);
}

 if(command=='r')
{
Serial.println("RIGHT");
digitalWrite(rightp,LOW);
digitalWrite(rightn,LOW);
digitalWrite(leftp,LOW);
digitalWrite(leftn,HIGH);
delay(1);
}

if(command=='s')
{
Serial.println("STOP");
digitalWrite(rightp,LOW);
digitalWrite(rightn,LOW);
digitalWrite(leftp,LOW);
digitalWrite(leftn,LOW);
delay(1);
}

if(command=='b')
{
Serial.println("BACK");
digitalWrite(rightp,LOW);
digitalWrite(rightn,HIGH);
digitalWrite(leftp,HIGH);
digitalWrite(leftn,LOW);
delay(1);
}
 
  
  
  

}
