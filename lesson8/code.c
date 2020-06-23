/*
  Keyboard

  Plays a pitch that changes based on a changing
  input circuit:
  * 3 pushbuttons from +5V to analog in 0 through
  3
  * 3 10K resistors from analog in 0 through 3 to
  ground
  * 8-ohm speaker on digital pin 8
*/

int pos = 0;//定义一个整型数值pos为0

void setup()
{
  pinMode(A0, INPUT);//设置A0端口为输入
  pinMode(8, OUTPUT);//设置8端口为输出
  pinMode(A1, INPUT);//设置A1端口为输入
  pinMode(A2, INPUT);//设置A2端口为输入
}

void loop()
{
  // 如果检测到按钮按下A0
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 100); // 播放音为57
  }
  // 如果检测到按钮按下A1
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100); // 播放音为59
  }
  // 如果检测到按钮按下A2
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 100); // 播放音为60
  }
  delay(10); // 延迟10毫秒
}