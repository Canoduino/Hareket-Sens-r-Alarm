int pirpin = 8;
int buzzer = 9;
int hareket;

void setup() {
  pinMode(pirpin, INPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop() {

 hareket = digitalRead(pirpin);
 
  if(hareket == HIGH){
  delay(100); 
  tone(buzzer, 700);
  delay(100);
  noTone(buzzer);
  }
  else{
    noTone(buzzer);
  }
}     
  
   
