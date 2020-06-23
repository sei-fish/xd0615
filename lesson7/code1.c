#include <MsTimer2.h>

int i=0;
void onTimer()
{
  Serial.print("timer ");
  Serial.println(i++);
}

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(10);
  Serial.begin(9600);
  MsTimer2::set(1000, onTimer);
  MsTimer2::start();
}

void loop()
{
  if(i==10) i=0;
  digitalWrite(2,i&0x1);
  digitalWrite(3,(i>>1)&0x1);
  digitalWrite(4,(i>>2)&0x1);
  digitalWrite(5,(i>>3)&0x1);
  delay(10);
}