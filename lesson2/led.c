int i=0,j=7;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(250); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    delay(250); // Wait for 1000 millisecond(s)
    j--;
  }
}