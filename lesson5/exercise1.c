void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}
byte in[0];
void loop()
{
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
  if(Serial.available()>0)
  {
    in[0]=Serial.read();
    in[0]=in[0]-'0';
    delay(10);

    
    digitalWrite(8,LOW);
    digitalWrite(2,in[0]&0x1);
    digitalWrite(3,(in[0]>>1)&0x1);
    digitalWrite(4,(in[0]>>2)&0x1);
    digitalWrite(5,(in[0]>>3)&0x1);
    digitalWrite(8,HIGH);
  	delay(10);
    
  }
}