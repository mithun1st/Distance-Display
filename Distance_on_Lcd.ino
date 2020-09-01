#include<LiquidCrystal.h>

LiquidCrystal lcd(22,24,26,28,30,32);

int dis,cm,inc,tr=42,ec=43;

void setup(){
  pinMode(22,OUTPUT);
  pinMode(23,INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.setCursor(3,0);
  lcd.print("Mh Mithun");
  delay(3000);
}

void loop(){

  digitalWrite(tr,0);
  delay(2);

  digitalWrite(tr,1);
  delay(10);
  digitalWrite(tr,0);

  dis=pulseIn(ec,1);

  cm=dis*0.034/2;
  inc=dis*0.0133/2;

  lcd.setCursor(0,0);
  lcd.print("Distance= ");
  lcd.print(cm);
  lcd.print("cm    ");

  lcd.setCursor(0,1);
  lcd.print("Distance= ");
  lcd.print(inc);
  lcd.print("inc  ");

  Serial.println(inc);

  delay(100);
}


