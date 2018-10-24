/*
Arduino code to control LED for optogenetic activation of flight muscles. 

Protocol taken from Titlow et al., 2015- JUNE

*/

//int ledPin = 2;

void setup() {
  pinMode(2, OUTPUT);
}

  void loop() {
    int F;
      for (int F=1; F <= 10; F=F+1){
      digitalWrite(2, HIGH);  // LED on (HIGH = ON)   
      delay(500);  // 0.5s
      digitalWrite(2, LOW);  // LED off (LOW voltage = OFF)  
      delay(3000);} // wait 3s
      
        digitalWrite(2, LOW); // Turn LED off for a long tim   
        delay(1800000);
}
