#include <Castilla.h>

//Declare the left and right LDR sensor
LDR sensorLeft=LDR(A0);
LDR sensorRight=LDR(A2);

void setup(){
  Serial.begin(9600);
}
void loop(){
  //Print out the left LDR reading
  sensorLeft.test();
  
  Serial.print("\t");
  
  //Print out the right LDR reading
  sensorRight.test();
}
