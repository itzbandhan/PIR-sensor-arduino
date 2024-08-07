#define SENSOR_PIN 2
#define RELAY_PIN 3
// This code is for motion detecting sensor
// if motion is detected, the digitalWrite(RELAY_PIN, HIGH);   code is executed
// otherwise   digitalWrite(RELAY_PIN, LOW);   is executed

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);  
}
void loop() {
  int sensorValue = digitalRead(SENSOR_PIN);
  if (sensorValue == HIGH){
    digitalWrite(RELAY_PIN, LOW); 
  } else{
    digitalWrite(RELAY_PIN, HIGH);    
  }
} 
// follow me on github : https://github.com/itzbandhan/
// star this repo
