void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // Set LED pin to output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
