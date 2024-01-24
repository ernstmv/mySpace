void setup(){
    Serial.begin(9600); 
}
void loop() {
    int my_signal=analogRead(A0);
    my_signal=map(my_signal, 0,1023,0,100);
    Serial.println(my_signal);
    delay(1);
}
