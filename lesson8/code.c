#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//LiquidCrystal(rs, enable, d4, d5, d6, d7) 
//��ʼ����ʹ�õĽӿ� 

void setup() {
  lcd.begin(16, 2);
  //lcd.begin(cols, rows)
  //����LCD�ĳ���Ϊ16�� X 2�� 
  lcd.print("hello, world!");
  //lcd.print(data)
  //ʹLCD��� "hello, world!" ���� 
}

void loop() {
  lcd.setCursor(0, 1);
  //lcd.setCursor(col, row)
  //�ƶ������ 0�� 1�� ��������һ�еڶ��� 
  lcd.print(millis() / 1000);
  //lcd.print(data) 
  //�Ժ���Ϊ��λ�ļ�ʱ����1000�����Ϊ����������һ�ж���õ�λ�� 
}
//ѭ�����У��� 0�� 1�� ����ʾ������0��1��2������ 
