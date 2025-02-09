void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Power On");
  digitalWrite(13, HIGH);
  delay(2000);
  Serial.println("Power Off");
  digitalWrite(13, LOW);
  delay(1000);
}
