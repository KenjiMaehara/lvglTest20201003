#include <Arduino.h>
#include "lv_ex_conf_template.h"
#include "lv_demo_widgets.h"
#include <TFT_eSPI.h>       // Hardware-specific library




TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

//void lv_demo_benchmark(void);


void setup() {
  // put your setup code here, to run once:


 tft.init();
  tft.setRotation(1);

  tft.fillScreen(TFT_BLACK);

  // Set "cursor" at top left corner of display (0,0) and select font 4
  tft.setCursor(0, 0, 4);
  tft.setTextFont(1);
  tft.setTextSize(2);

  // Set the font colour to be white with a black background
  tft.setTextColor(TFT_WHITE, TFT_BLACK);

  // We can now plot text on screen using the "print" class
  tft.println("Intialised default\n");
  tft.println("White text");

  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.println("Red text");

  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.println("Green text");

  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.println("Blue text");

  delay(5000);

}

void loop() {
  // put your main code here, to run repeatedly:
  //lv_demo_widgets();
  lv_demo_widgets();



#if 0

    tft.invertDisplay( false ); // Where i is true or false

  tft.fillScreen(TFT_BLACK);

  tft.setCursor(0, 0, 4);
  tft.setTextFont(1);
  tft.setTextSize(2);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.println("Invert OFF\n");

  tft.println("White text");

  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.println("Red text");

  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.println("Green text");

  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.println("Blue text");

  delay(5000);


  // Binary inversion of colours
  tft.invertDisplay( true ); // Where i is true or false

  tft.fillScreen(TFT_BLACK);

  tft.setCursor(0, 0, 4);
  tft.setTextFont(1);
  tft.setTextSize(2);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.println("Invert ON\n");

  tft.println("White text");

  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.println("Red text");

  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.println("Green text");

  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.println("Blue text");

  #endif

  delay(5000);
 }


