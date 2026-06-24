 #include <Servo.h> 
 Servo motor; 
 int deger; // The value we are reading at the moment 
 int derece;// The degree we will convert the incoming value to  
  
 void setup() { 
   motor.attach(5); // We defined signal pin of the motor    
    
  
 } 
  
void loop() { 
   deger = analogRead (A0); // Joystick is gonna read that value  
   derece = map(deger, 0,1023,0,180);// We first convert the value coming from the joystick into a numeric value using the map function, then turn it into a degree between 0 and 180  
   motor.write(derece);// Motor will move according to degree we get  
} 
  
 } 
