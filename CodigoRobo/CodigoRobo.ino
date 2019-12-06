#include <Stepper.h> 
 
const int stepsPerRevolution = 500; 
Stepper myStepper(stepsPerRevolution, 8,10,9,11); 
  
void setup() 
{ 
 myStepper.setSpeed(60);
} 
  
void loop() 
{ 
 myStepper.step(500); 
}
