#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6
#define S 9
#define LT 7
#define BT 8

int pinInterrupt = 2;
 int i=0;
void myfunc()
{
  i=-1;
}
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S, OUTPUT);//片选
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(S,LOW);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(S,HIGH);

  
  attachInterrupt(digitalPinToInterrupt(pinInterrupt),myfunc,CHANGE);//设置中断，
}


void loop()
{
  
      for(i=0;i<10;i++)
      {

        digitalWrite(S,LOW);
        digitalWrite(IN1,(i)&0x1);
        digitalWrite(IN2,(i>>1)&0x1);
        digitalWrite(IN3,(i>>2)&0x1);
        digitalWrite(IN4,(i>>3)&0x1);
        digitalWrite(S,HIGH);
        delay(1000);
  	
      }
  
}