#include <Servo.h>
#include <Wire.h>
#include "SparkFun_VCNL4040_Arduino_Library.h"

VCNL4040 proximitySensor;                     //Sensor Object
Servo myservo;                                //Servo Object

int proxValue = 0;                            //int holding the proximity sensor value

void setup() 
{
  Serial.begin(9600);
  Serial.println("Serial connection established.");
  Wire.begin();                               //join I2C Protocol 
  Serial.println("I2C Protocol joined.");
  //proximitySensor.begin(); 

  if (proximitySensor.begin() == false)       //connection check, holds program until restart if sensor not found. 
  {
    Serial.println("--Sensor not found, Check Wiring!--");
    while (true); 
  }
  else
  {
    Serial.println("Proximity Sensor initiated.");
  }

  proximitySensor.powerOnProximity();         //Start proximity detection
  proximitySensor.powerOnAmbient();           //Start Ambient detection
  proximitySensor.enableWhiteChannel();       //Staart White Light detection

  myservo.attach(9);                          //Servo port 

  Serial.println("Loading SkyNet...");        //prepares to end the world
  delay(2500);
  Serial.println("SkyNet Loaded!");           //doomsday sequence initiated
  
  myservo.write(180);                         //calibrates servo at start
}

void loop() 
{
  proxValue = proximitySensor.getProximity();     //gets proximity value and put it into the proxValue int.
  Serial.print("Prox value[");
  Serial.print(proxValue);
  Serial.println("]");
  //ambientValue = proximitySensor.getAmbient(); 
  //whiteValue = proximitySensor.getWhite(); 
  
  if (proxValue < -9000 || proxValue > 10000)     //if Coin is covering the sensor
  {
    myservo.write(90);                            //30 degree rotation to open lids
    delay(1000);
    proxValue = proximitySensor.getProximity();   //refresh proximity
    if (proxValue < 90 && proxValue > 65)         //if nothing is covering the sensor
    {
      delay(500);
      myservo.write(180);                         //reset servo angle, which closes the box
    }
    else
    {
      Serial.print("-----Coin is still on sensor----- (value[");         //prints out warning letting the user know that the sensor is still blocked
      Serial.print(proxValue);
      Serial.println("]");
      delay(2000);
      myservo.write(180);                         //reset servo angle, which closes the box
      delay(400);
    }
  }
  else if (proxValue > 3000 && proxValue < 7500)                        //if something is covering the sensor, but it's not a coin
  {
    Serial.println("---Sensor is covered, but no coin is detected!---");
    delay(1000);
  }
  if (proxValue == 0)                             //if proxValue is still at 0 
  {
    Serial.println("No reading(proxValue = 0)");  //sends an error message
  }
  
  delay(10);                                      //loop delay
}
