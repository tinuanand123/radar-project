#include <Servo.h>

#include <Servo.h>

Servo servo;
int angle = 0;

void setup() {
  servo.attach(9);
  servo.write(180);
}


void loop() 
{ 
 // scan from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo.write(180);               
    delay(10);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo.write(180);           
    delay(10);       
  } 
} 
