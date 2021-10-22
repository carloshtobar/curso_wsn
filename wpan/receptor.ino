#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
char dato;

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
    if(Serial.read() == '1') {
      dato = Serial.read();
      lcd.print(dato);
      delay(1000);
      lcd.clear();    
    }  
  }

}
