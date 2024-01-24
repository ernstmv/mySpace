#define pot 14
#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11
#define LED 13

int paso [4][4] = 
{
  {1, 0, 0, 0},
  {0, 1, 0, 0},
  {0, 0, 1, 0},
  {0, 0, 0, 1}
  
};

void setup()
{
  pinMode(pot, INPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int vel=analogRead(pot);
  vel=map(vel,0,1023,-100,100);

  if(vel>0){
    for (int i = 0; i < 4; i++)
  {
  digitalWrite(IN1, paso[i][0]);
  digitalWrite(IN2, paso[i][1]);
  digitalWrite(IN3, paso[i][2]);
  digitalWrite(IN4, paso[i][3]);
  delay(vel);
   }
  } 
  if(vel<0){
    vel=vel*-1;
  digitalWrite(IN1, paso[i][0]);
  digitalWrite(IN2, paso[i][1]);
  digitalWrite(IN3, paso[i][2]);
  digitalWrite(IN4, paso[i][3]);
    for (int i = 4; i >0; i--)
    {
  delay(vel);
    }
  }
}
