Void setup(){
  pinMode(13,OUTPUT)
}

Void loop(){
  DigitalWrite(13,HIGH);
  Delay(500);
  DigitalWrite(13,LOW);
  Delay(500);
}
