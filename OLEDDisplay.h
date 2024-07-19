#ifndef OLEDDISPLAY_H
#define OLEDDISPLAY_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class OLEDDisplay {
public:
  OLEDDisplay();
  void begin();
  void update(int lineFollowing, int distance);

private:
  Adafruit_SSD1306 display;
};

#endif
