

#define trigPin 8  // These lines assign names to values
#define echoPin 7  // so they can be easily identified.
#define buzzer 12  // These are set before the code

/* This section of code below runs only one time.
 * It enables the serial monitor to see output and
 * sets the pins to input or output.
*/ 
void setup() {
  Serial.begin (9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);  
  pinMode(buzzer, OUTPUT);
}

/* The remaining part of the code runs in a constant loop.
 * It triggers the ultrasonic sensor and calculates the
 * time it took for the sound waves to return.  It converts
 * the time in milliseconds into distance in centimeters.
 */
void loop() { 
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print(distance);
    Serial.println(" cm");
  
// This part of the code below determines whether to
// beep depending on the distance detected. If the objectd n  
// is within 62 start the beeps.
     

if (distance<100 and distance>80) 
                         {tone(buzzer,255); 
                          delay(500); 
                          tone(buzzer,0); 
                          delay(500); }    //sound buzzer every second if obstacle distance is between 30-45cm. 
  
   
   else if (distance<80 and distance>30) 
                          {tone(buzzer,255); 
                           delay(250); 
                           tone(buzzer,0); 
                           delay(250); }   //sound buzzer every 0.25 seconds if obstacle distance is between 18-30cm. 
  
   
   else if (distance<30 and distance>0)  {tone(buzzer,255); 
                           delay(70); 
                           tone(buzzer,0);
                           delay(70); }    //sound buzzer every 0.07 seconds if obstacle distance is between 0-18cm. 
  
   
   else                     tone(buzzer,100); //long 
}


  
