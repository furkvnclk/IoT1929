const int myPins[] = {2,3,4,5,6};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<5; i++) {
    pinMode(myPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i<5; i++) {
     digitalWrite(myPins[i], HIGH);
     delay(100);
     digitalWrite(myPins[i], LOW);
  }

  for(int j = 5; j>0; j--) {
     digitalWrite(myPins[j], HIGH);
     delay(100);
     digitalWrite(myPins[j], LOW);
  }
}
