const int levels[]={27,4,5,12,13,14,15,16,17,18,19,21};//16&17 rayitas arriba, de aca pa alla 2
const int pinTest=27;
void setup(){
  Serial.begin(9600);
  for (const auto& level : levels) pinMode(level, INPUT_PULLUP);
  pinMode(pinTest, INPUT_PULLUP);
}

void loop(){
  Serial.println(digitalRead(pinTest));
  delay(1000);
}
