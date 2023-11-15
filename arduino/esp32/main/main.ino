#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
const int LDR=34;

void setup(){
    Serial.begin(115200);
    SerialBT.begin("FOCUS FOCUS KAIBIL");
    Serial.println("El dispositivo esta ahora activo, Conectate a el desde tu movil. ");

}

void loop(){
    int LDR_Value=analogRead(LDR);
    SerialBT.print(LDR_Value);
    SerialBT.println();
    delay(100);
}
