#include <Servo.h>
#define Buzzer 13
#define Gas A1

char data;
int val;
Servo myservo;
void setup() {

  // put your setup code here, to run once:
  pinMode (A1,INPUT);
 
  pinMode(Buzzer,OUTPUT);
  //analogWrite(Buzzer,LOW);
   myservo.attach(8);
  Serial.begin(9600);
  Serial.println("Starting my program");
}

void loop()
{
  // put your main code here, to run repeatedly:

    val = analogRead (Gas);
     Serial.println(val);
    if(val > 300)
    {
      Serial.write("ON");
      digitalWrite(Buzzer,HIGH);
       myservo.write(1000);
      //delay(1000);
    }
    else
    {
      Serial.write("OFF");
      digitalWrite(Buzzer,LOW);
       myservo.write(-360);
      //delay(1000);
    }

    if(Serial.available()>0)
    {
      if(Serial.read() == '1')
      {
        digitalWrite(Buzzer,HIGH);
        delay(1000);
         myservo.write(180);
      }
      else if(Serial.read() == '0')
      {
        digitalWrite(Buzzer,LOW);
        delay(1000);
          myservo.write(-180);
      }
    }

    delay (500);
 
}
