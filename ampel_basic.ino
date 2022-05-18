int ledred = 11;
int ledyellow = 12;
int ledgreen = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledred,OUTPUT);
  pinMode(ledyellow,OUTPUT);
  pinMode(ledgreen,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledred,HIGH);
  delay(2000);
  digitalWrite(ledyellow,HIGH);
  delay(500);
  digitalWrite(ledred,LOW);
  digitalWrite(ledyellow,LOW);
  digitalWrite(ledgreen,HIGH);
  delay(2000);
  digitalWrite(ledgreen,LOW);
}
