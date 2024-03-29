// Program #2

#include <LiquidCrystal.h>
long counter = 0;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

  byte heart[8] = {
  B00000,
  B11011,
  B10101,
  B10001,
  B01010,
  B00100,
  B00000,
};

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  lcd.createChar(0, heart);

  // Print a message to the LCD.
  
  lcd.clear();  			// set the cursor to column 0, line 1
  lcd.write(byte(0)); 		 // (note: line 1 is the second row, since counting begins with 0):
  lcd.print("Flying hearts");
  lcd.write(byte(0));
  lcd.setCursor(0, 1);
    lcd.noAutoscroll();  		// print the number of seconds since reset
}

void loop() {

for (counter = 0;counter <15;counter++)
 {
   lcd.setCursor(counter,1); 
   lcd.write(byte(0));
   delay(200);   //   
   lcd.setCursor(counter,1);
   lcd.print(" ");
 } 

for (counter = 15;counter >0;counter--)
 {
   lcd.setCursor(counter,1); 
   lcd.write(byte(0));
   delay(200);  
   lcd.setCursor(counter,1);
   lcd.print(" ");
 } 
}

