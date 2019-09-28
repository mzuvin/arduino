#define potpin A0
int deger=0; 
void setup() 
{
  Serial.begin(9600); 
  for(int i=2; i<14; i++) {
    pinMode(i, OUTPUT); 
  }
}
void loop() 
{
  deger  = analogRead(potpin); 
  Serial.println(deger); 
  delay(100);
  int led = (deger %1000)/100;
  ledyak(led);
}

void ledyak(int led){
  for (int i=2; i<10; i++){
      digitalWrite(i, LOW);
  }
  for (int i=led; i>=2; i--){
      digitalWrite(i, HIGH);
  }
}
