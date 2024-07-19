#include "OLEDDisplay.h"

OLEDDisplay::OLEDDisplay() : display(OLED_RESET) {}

void OLEDDisplay::begin() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  display.clearDisplay();
  display.display();
}

void OLEDDisplay::update(int lineFollowing, int distance) {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Line Following: ");
  display.println(lineFollowing, BIN);
  display.print("Distance: ");
  display.print(distance);
  display.println(" cm");
  display.display();
}
