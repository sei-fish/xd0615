#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//LiquidCrystal(rs, enable, d4, d5, d6, d7) 
//初始化所使用的接口 

void setup() {
  lcd.begin(16, 2);
  //lcd.begin(cols, rows)
  //定义LCD的长宽为16列 X 2行 
  lcd.print("hello, world!");
  //lcd.print(data)
  //使LCD输出 "hello, world!" 字样 
}

void loop() {
  lcd.setCursor(0, 1);
  //lcd.setCursor(col, row)
  //移动光标至 0列 1行 处，即第一列第二行 
  lcd.print(millis() / 1000);
  //lcd.print(data) 
  //以毫秒为单位的计时除以1000换算成为秒后输出在上一行定义好的位置 
}
//循环进行，在 0列 1行 处显示秒数：0，1，2··· 
