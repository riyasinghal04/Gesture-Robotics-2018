 int rightp=2;
 int rightn=3;
 int leftp=4;
 int leftn=5;


void setup() {
  // put your setup code here, to run once:

 
  pinMode(rightp,OUTPUT); //right WHEEL POSITIVE
  pinMode(rightn,OUTPUT); //right WHEEL NEGATIVE
  pinMode(leftp,OUTPUT); //left WHEEL POSITIVE
  pinMode(leftn,OUTPUT); //left WHEEL NEGATIVE
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sl=digitalRead(6);
  int sr=digitalRead(7);

if(sl==HIGH && sr==HIGH)
{
Serial.println("FORWARD");
digitalWrite(rightp,HIGH);
digitalWrite(rightn,LOW);
digitalWrite(leftp,LOW);
digitalWrite(leftn,HIGH);
delay(1);
}

else if(sl==LOW && sr==LOW) 
{
Serial.println("STOP");
digitalWrite(rightp,LOW);
digitalWrite(rightn,LOW);
digitalWrite(leftp,LOW);
digitalWrite(leftn,LOW);
delay(1);
}

else if(sl==HIGH && sr==LOW)
{
Serial.println("LEFT");
digitalWrite(rightp,HIGH);
digitalWrite(rightn,LOW);
digitalWrite(leftp,LOW);
digitalWrite(leftn,LOW);
delay(1);
}

else if(sl==LOW && sr==HIGH)
{
Serial.println("RIGHT");
digitalWrite(rightp,LOW);
digitalWrite(rightn,LOW);
digitalWrite(leftp,LOW);
digitalWrite(leftn,HIGH);
delay(1);
}
  

}
