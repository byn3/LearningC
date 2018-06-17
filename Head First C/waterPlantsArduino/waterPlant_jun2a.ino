/*
answer taken from http://www.instructables.com/id/Arduino-Plant-Watering-System/
*/
int waterPump = 1;
void setup() {
  Serial.begin(9600)
  pinMode(waterPump, OUTPUT);
}

void loop() {
  int humidityRaw = analogRead(A0);
  int humidityReal = map(humidityRaw, 1023, 0, 0, 100);
  Serial.println(humidityReal);
  delay(200);
  if (humidityRaw > 800){//or humidityReal > 30. i dunno
    digitalWrite(waterPump, HIGH);
  }
  else {
    digitalWrite(waterPump, LOW);
  }
}
