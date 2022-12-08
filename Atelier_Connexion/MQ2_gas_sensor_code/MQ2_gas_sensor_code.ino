#include <Servo.h>
#include <LiquidCrystal_I2C.h>

Servo myservo;
LiquidCrystal_I2C lcd(0x27, 16, 2); /*I2C address 0x27, 16 column and 2 rows*/
int redLed = 12;
int greenLed = 11;
int buzzer = 13;
int smokeA0 = A0;
char data;
int sensorThres = 300; /*Your threshold value*/

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  myservo.attach(9);
  myservo.write(0);
  
  lcd.begin(16, 2); /*16 colones 2 lignes*/
 
 
  lcd.init(); /*initialize the lcd*/
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("WELCOME");
  lcd.setCursor(5,1);
  lcd.print("THE COURT"); 
  Serial.begin(9600);/*permet d’initialiser la liaison Série à 9600 */
}

void loop() {
  int analogSensor = analogRead(smokeA0);
  Serial.print("Pin A0: ");
  Serial.println(analogSensor); /*Checks if it has reached the threshold value*/ 
  

     if(Serial.available()>0)
    {
      data=Serial.read();
      if(data == '1')
      {
        if(analogSensor>sensorThres)
        {   
            lcd.clear();
            Serial.write("ON");
            myservo.write(0);
            digitalWrite(redLed, HIGH);
            digitalWrite(greenLed, LOW);
            digitalWrite(buzzer,HIGH);
            myservo.write(90);
            delay(3000);
            myservo.write(180); 
             String CIN="";
      for(int i=0;i<16;i++)
          {   
            
               data=Serial.read();
               CIN+=data;
               lcd.setCursor(3,0);
               lcd.print(CIN);
               lcd.setCursor(0,1);
               lcd.print("Employe Notifié" );        
          }
        }
        else {
             lcd.clear();
             lcd.setCursor(0,0);
             lcd.print("Alarme non activé");
             lcd.setCursor(0,1);
             lcd.print("Fausse Alerte" );
             }
      }
      else if(data == '0')
      {   
        if(analogSensor<sensorThres)
        {   
            lcd.clear();
            Serial.write("OFF");
            digitalWrite(redLed, LOW);
            digitalWrite(greenLed, HIGH);
            digitalWrite(buzzer,LOW);
             myservo.write(0);  
            data=Serial.read();
            String CIN="";
         for(int i=0;i<16;i++)
           {    
             data=Serial.read();
             CIN+=data;
             lcd.setCursor(0,0);
             lcd.print(CIN);
             lcd.setCursor(0,1);
             lcd.print("Quitter" );        
          }
       }
    }
  }    
}
