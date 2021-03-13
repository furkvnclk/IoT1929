#define ledRed 2
#define ledYellow 3
#define ledGreen 4

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRed, HIGH);
  delay(10000);
  digitalWrite(ledYellow, HIGH);
  delay(10000);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  delay(2000);
  digitalWrite(ledGreen, HIGH);
  delay(5000);
  digitalWrite(ledGreen, LOW);
}
