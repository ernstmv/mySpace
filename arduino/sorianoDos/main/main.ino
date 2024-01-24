void setup(){
  Serial.begin(9600);
}

void loop(){
  int lect=map(analogRead(A0),0,1023,0,100);

  Serial.println(lect);
  delay(100);
}