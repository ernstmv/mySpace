#define trigPin         9// trigger
#define echoPin         10//echo
#define motorEnablePin  3//L293D (ENA)
#define motorInput1     5// L293D (IN1)
#define motorInput2     6// L293D (IN2)

void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(motorEnablePin,OUTPUT);
  pinMode(motorInput1,OUTPUT);
  pinMode(motorInput2,OUTPUT);
}


  void loop(){
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    
    // Duracion del pulso de eco

   long duration=pulseIn(echoPin,HIGH);
   int distance=duration/58;
   Serial.print("Distance: ");
   Serial.println(distance);
   int motorSpeed=map(distance, 5, 100, 0, 255);
   motorSpeed=max(motorSpeed, 50);
   //Controla la direccion del motor con el puente H L293D
   digitalWrite(motorInput1,HIGH);
   digitalWrite(motorInput2,LOW);
   //Controla la velocidad del motor con PWM en el pin de habilitacion 

   analogWrite(motorEnablePin,motorSpeed);
   delay(100);
    
    }
