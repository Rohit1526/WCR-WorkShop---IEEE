void setup() {
  // put your setup code here, to run once:
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(D1,HIGH);
digitalWrite(D2,LOW);
digitalWrite(D3,HIGH);
digitalWrite(D4,LOW);
delay(5000);
digitalWrite(D1,LOW);
digitalWrite(D2,HIGH);
digitalWrite(D3,LOW);
digitalWrite(D4,HIGH);
delay(5000);
digitalWrite(D1,HIGH);
digitalWrite(D2,LOW);
digitalWrite(D3,LOW);
digitalWrite(D4,LOW);
delay(5000);
digitalWrite(D1,LOW);
digitalWrite(D2,LOW);
digitalWrite(D3,HIGH);
digitalWrite(D4,LOW);
delay(5000);
}
