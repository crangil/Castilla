#include <CapacitiveSensor.h>
#include <Castilla.h>

//Define the capacitive sensor
CapacitiveSwitch sensor=CapacitiveSwitch(2,3);
//Use Tinkerkit LED(or Tinkerkit LED matrix) here. 
//Deinfe the LED
LED led=LED(9);

void setup(){
   // configure the serial port
   Serial.begin(9600);
   
   //initialize components
   sensor.config(200);
   led.begin();
}

void loop(){
  //When someone attempts to open the
  //cookie jar, the sensor is activated
  if(sensor.pressed()){
    //Sends signal to processing, so a picture
    //will be captured
    Serial.write('p');
    //Turn on the LED for 2 seconds afterwards
    led.on();
    delay(2000);
    led.off();
  }
}

