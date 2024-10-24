#include <Adafruit_GFX.h>
// #include <Adafruit_GrayOLED.h>
// #include <Adafruit_SPITFT.h>
// #include <Adafruit_SPITFT_Macros.h>
// #include <gfxfont.h>
#include <Adafruit_ST7789.h>


#define LCD_MOSI 23
#define LCD_SCLK 18
#define LCD_CS   15
#define LCD_DC    2
#define LCD_RST   4
#define LCD_BLK  32


Adafruit_ST7789 lcd = Adafruit_ST7789(LCD_CS, LCD_DC, LCD_RST);


#define LCD_WIDTH  170
#define LCD_HEIGHT 320


void setup() {
  // put your setup code here, to run once:

  lcd.init(LCD_WIDTH, LCD_HEIGHT);
  lcd.setRotation(0);  //The parameters are: 0, 1, 2, 3, representing the rotation of the screen 0°, 90°, 180°, 270°
  lcd.fillScreen(ST77XX_BLACK);
}


void loop() {
  // put your main code here, to run repeatedly:

  lcd.setTextSize(3);
  lcd.print("ARCANE");

  Serial.begin(9600);
  Serial.println("Hello, world!");

  delay(1000 * 10);
}


