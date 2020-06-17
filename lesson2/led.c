int i=0;
int j=7;
void setup()
{
 for(i=0;i<8;i++) 
 {
   pinMode(i, OUTPUT);
 }
}

void loop()
{
  for(j=7;j>=0;j--)
  {
    digitalWrite(j, HIGH);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(j, LOW);
    delay(300); // Wait for 300 millisecond(s)
  }
}