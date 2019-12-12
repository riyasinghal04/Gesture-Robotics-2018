
void setup() {
  pinMode(2,OUTPUT); //right WHEEL POSITIVE
  pinMode(3,OUTPUT); //right WHEEL NEGATIVE
  pinMode(4,OUTPUT); //left WHEEL POSITIVE
  pinMode(5,OUTPUT); //left WHEEL NEGATIVE
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  
  Serial.begin(9600);

}

void loop() 
{
  int sl=digitalRead(6);
  int sr=digitalRead(7);

if(sl==LOW && sr==HIGH)
{
Serial.println("LEFT");
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(2000);
}

else if(sl==HIGH && sr==LOW)
{
Serial.println("RIGHT");
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(2000);
}

else if(sl==HIGH && sr==LOW)
{
Serial.println("RIGHT");
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(2000);
}

else if(sl==HIGH && sr==HIGH) //not required
{ 
Serial.println("STOP");
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(2000);
}

else if(sl==LOW && sr==LOW)
{
Serial.println("FORWARD");
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(2000);
}

else 
{
Serial.println("STOP");
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(3000);
}
 


 
}
