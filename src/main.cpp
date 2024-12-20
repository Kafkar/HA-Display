#include <Arduino.h>
#include <TFT_eSPI.h> /


TFT_eSPI tft = TFT_eSPI();       // Invoke custom library

void setup() {
//Setup the serial port
  Serial.begin(115200);

//Setup the display
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

    // Print display sizes
  Serial.println("Display sizes:");
  Serial.print("Width: ");
  Serial.println(tft.width());
  Serial.print("Height: ");
  Serial.println(tft.height());

  // Display startup text
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(1);
  tft.setTextDatum(MC_DATUM);
  tft.drawString("Kafkar HA-Display", tft.width() / 2, tft.height() / 2);

  // Wait for 5 seconds
  delay(5000);

  // Clear the screen
  tft.fillScreen(TFT_BLACK);
}

void loop() {
  // put your main code here, to run repeatedly:
}

