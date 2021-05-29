#include <Servo.h>
#include <Wire.h>
#include "SparkFun_VCNL4040_Arduino_Library.h"

VCNL4040 proximitySensor;   //Sensor Object
Servo myservo;              //Servo Object

int proxValue = -1;         //int holding the proximity sensor value
//int ambientValue = 0; 
//int whiteValue = 0;

void setup() 
{
  Serial.begin(9600);
  Wire.begin();             //join I2C Protocol
  //proximitySensor.begin(); 

  if (proximitySensor.begin() == false)               //connection check, holds program until restart if sensor not found. 
  {
    Serial.println("--Sensor not found, Check Wiring!--");
    while (true); 
  }

  proximitySensor.powerOnProximity();   //Start proximity detection
  proximitySensor.powerOnAmbient();     //Start Ambient detection
  proximitySensor.enableWhiteChannel(); //Staart White Light detection

  myservo.attach(9);                    //Servo port 

  myservo.write(180);
}

void loop() 
{
  proxValue = proximitySensor.getProximity();   //gets proximity value and put it into the proxValue int.
  Serial.print("Prox value[");
  Serial.println(proxValue);
  //ambientValue = proximitySensor.getAmbient(); 
  //whiteValue = proximitySensor.getWhite(); 
  
  if (proxValue < 10 && proxValue > 0)          //if something is covering the sensor
  {
    Serial.print("Sensor Covered --- ");
    Serial.println(proxValue);
    delay(1000);
    proxValue = proximitySensor.getProximity(); 
    if (proxValue > 50)                        //if not covered 
    {
      Serial.print("Sensor No Longer Covered --- ");
      Serial.println(proxValue);                       
    }
    else
    {
      Serial.print("!! Sensor blocked: ");         
      Serial.println(proxValue);
      delay(500);                        
    }
  }
  else if (proxValue = -1)
  {
    Serial.println("No reading(proxValue = -1)"); //error message if proxValue is still at -1
  }
  
  delay(10);
}
