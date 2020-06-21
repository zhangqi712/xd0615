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
  if(Serial.available()>0)
  {
    in[0]=Serial.read();
    in[0]=in[0]-'0';
    delay(10);
    in[1]=Serial.read();
    in[1]=in[1]-'0';
    delay(10);
    in[2]=Serial.read();
    in[2]=in[2]-'0';
    delay(10);
    in[3]=Serial.read();
    in[3]=in[3]-'0';
    delay(10);
    
    digitalWrite(8,LOW);
    digitalWrite(2,in[0]&0x1);
    digitalWrite(3,(in[0]>>1)&0x1);
    digitalWrite(4,(in[0]>>2)&0x1);
    digitalWrite(5,(in[0]>>3)&0x1);
    digitalWrite(8,HIGH);
  	delay(10);
    
    digitalWrite(9,LOW);
    digitalWrite(2,in[1]&0x1);
    digitalWrite(3,(in[1]>>1)&0x1);
    digitalWrite(4,(in[1]>>2)&0x1);
    digitalWrite(5,(in[1]>>3)&0x1);
    digitalWrite(9,HIGH);
  	delay(10);
    
    digitalWrite(10,LOW);
    digitalWrite(2,in[2]&0x1);
    digitalWrite(3,(in[2]>>1)&0x1);
    digitalWrite(4,(in[2]>>2)&0x1);
    digitalWrite(5,(in[2]>>3)&0x1);
    digitalWrite(10,HIGH);
  	delay(10);
    
    digitalWrite(11,LOW);
    digitalWrite(2,in[3]&0x1);
    digitalWrite(3,(in[3]>>1)&0x1);
    digitalWrite(4,(in[3]>>2)&0x1);
    digitalWrite(5,(in[3]>>3)&0x1);
    digitalWrite(11,HIGH);
  	delay(10);
  }
}