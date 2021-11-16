

 void setup() {
   Serial.begin(9600);
 }
 void loop() {
  int sensorValue = analogRead(A1);
  int angle = sensorValue * -0.2687 + 141.25;
  Serial.print(angle);
  Serial.println(" degrees");
  delay(500);
 }
