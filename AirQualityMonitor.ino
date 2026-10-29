#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
  
int pin8 = 8;
int analogPin = A0;
int sensorValue = 0;
                  
void setup(){
  pinMode(analogPin, INPUT);
  pinMode(pin8, OUTPUT);
  lcd.begin(16,2);
  lcd.print("Air Today is-");
  lcd.print("Air Quality:");
  Serial.begin(9600);
  lcd.display();
}

void loop(){
  delay(500);
  sensorValue = analogRead(analogPin);
  Serial.print("Air Quality in PPM = ");
  Serial.print(sensorValue);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Air Quality: ");
  lcd.print(sensorValue);
  
  if (sensorValue < 450){
    Serial.print("Fresh Air");
    Serial.print("\r\n");
    lcd.setCursor(0,1);
    lcd.print("Fresh Air");
  }
  else if (sensorValue >= 450 && sensorValue <= 600){
    Serial.print("Poor Air");
    Serial.print("\r\n");
    lcd.setCursor(0,1);
    lcd.print("Poor Air");
  }
  else if (sensorValue > 600){
    Serial.print("Dangerous Air");
    Serial.print("\r\n");
    lcd.setCursor(0,1);
    lcd.print("Dangerous Air");
  }
  if (sensorValue > 600){
    digitalWrite(pin8,HIGH);
  }
  else {
    digitalWrite(pin8,LOW);
  }
}
