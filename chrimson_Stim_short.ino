/*
  ChR_Stim
  
  Script to drive an LED for optogenetic stimulation. 
  
  Turns on an LED for 0.5 seconds, then off for 3 seconds. Total of 10 cycles.

  modified 21 February 2015
  by Josh Titlow
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 2 as an output.
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // LED on (HIGH = ON)
  delay(500);              // 0.5s
  digitalWrite(2, LOW);    // LED off (LOW voltage = OFF)
  delay(3000);              // wait 3s
digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);   
digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);  
 digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);   
digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);  
 digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);   
digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);  
 digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);   
digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);  
digitalWrite(2, HIGH);   
  delay(500);              
  digitalWrite(2, LOW);    
  delay(3000);   
digitalWrite(2, HIGH);      
  delay(500);                            
  digitalWrite(2, LOW);    
  delay(9003000);   

}
