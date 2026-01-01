Void setup(){
  pinMode(13,OUTPUT)
}

Void loop(){
  DigitalWrite(13,HIGH);
  Delay(1000);
  DigitalWrite(13,LOW);
  Delay(1000);
}
