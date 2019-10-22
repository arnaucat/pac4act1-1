int periode = 1000;
unsigned long timenow = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  //LED_BUILTIN = PIN 6 DE LA MRK1000
}


void loop() {
   timenow = millis();
   while(millis() < timenow+periode){
     Serial.println("Hola1");
     digitalWrite(LED_BUILTIN, LOW);
   }
     
    while(millis() < timenow+(periode*2)){
    Serial.println("Hola2");
    digitalWrite(LED_BUILTIN, HIGH);
    }

}
