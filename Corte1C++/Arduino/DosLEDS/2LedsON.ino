void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  
  delay(100);                      
  digitalWrite(13, LOW);   
  delay(1000);    
  digitalWrite(14, HIGH);  
  delay(500);                //Medio segundo encendido     
  digitalWrite(14, LOW);   
  delay(1000);               //Un segundo encendido     
}                  
}
