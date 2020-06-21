void setup()
{
  pinMode(2, OUTPUT);//输入1
  pinMode(3, OUTPUT);//输入2
  pinMode(4, OUTPUT);//输入3
  pinMode(5, OUTPUT);//输入4
  pinMode(8, OUTPUT);//片选1
  pinMode(9, OUTPUT);//片选2
  pinMode(10, OUTPUT);//片选3
  pinMode(11, OUTPUT);//片选4
  pinMode(6,OUTPUT);//测试
  pinMode(7,OUTPUT);//消隐
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  
   Serial.begin(9600);
}
int i=0;
byte income[8];

void loop()
{

  if(Serial.available()>0)
  {
    
      for(i=0;;i++)
      {
  	    income[i]=Serial.read();
        income[i]=income[i]-'0';
        delay(10);
     

        digitalWrite(11,LOW);
        digitalWrite(2,(income[i])&0x1);
        digitalWrite(3,(income[i]>>1)&0x1);
        digitalWrite(4,(income[i]>>2)&0x1);
        digitalWrite(5,(income[i]>>3)&0x1);
        digitalWrite(11,HIGH);

       if(i>=1)
       {
         digitalWrite(10,LOW);
         digitalWrite(2,(income[i-1])&0x1);
         digitalWrite(3,(income[i-1]>>1)&0x1);
         digitalWrite(4,(income[i-1]>>2)&0x1);
         digitalWrite(5,(income[i-1]>>3)&0x1);
         digitalWrite(10,HIGH);
       }
       else{
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
       digitalWrite(4,LOW);
       digitalWrite(5,LOW);
        }
      
      if(i>=2)
      {
       digitalWrite(9,LOW);
       digitalWrite(2,(income[i-2])&0x1);
       digitalWrite(3,(income[i-2]>>1)&0x1);
       digitalWrite(4,(income[i-2]>>2)&0x1);
       digitalWrite(5,(income[i-2]>>3)&0x1);
       digitalWrite(9,HIGH);
 }
       else{
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
       digitalWrite(4,LOW);
       digitalWrite(5,LOW);
        }
        
       if(i>=3)  
        {
       digitalWrite(8,LOW);
       digitalWrite(2,(income[i-3])&0x1);
       digitalWrite(3,(income[i-3]>>1)&0x1);
       digitalWrite(4,(income[i-3]>>2)&0x1);
       digitalWrite(5,(income[i-3]>>3)&0x1);
       digitalWrite(8,HIGH);
        }
       else{
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
       digitalWrite(4,LOW);
       digitalWrite(5,LOW);
        }
           delay(1000);
  	
      }
  }
}