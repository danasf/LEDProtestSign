#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_DotStarMatrix.h>
#include <Adafruit_DotStar.h>
#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif

#define DATAPIN  4
#define CLOCKPIN 5
#define arr_len( x )  ( sizeof( x ) / sizeof( *x ) )


Adafruit_DotStarMatrix matrix = Adafruit_DotStarMatrix(
  32, 8, DATAPIN, CLOCKPIN,
  DS_MATRIX_TOP     + DS_MATRIX_LEFT +
  DS_MATRIX_COLUMNS + DS_MATRIX_ZIGZAG,
  DOTSTAR_BRG);


// Edit this
// The important stuff, your message and colors

char* slogans[]= {"NO DAPL","NO KEYSTONE","NO PIPELINES","STAND WITH STANDING ROCK","WATER IS LIFE","MNI WICONI","RESIST"};
const uint16_t colors[] = { matrix.Color(255, 0, 100), matrix.Color(0, 128, 128), matrix.Color(0, 200, 128),matrix.Color(128, 0, 128) };
int brightness = 100;
// End Edit

int numMode = arr_len(slogans)-1;
int numColor = arr_len(colors)-1;
int  pixelPerChar = 6;
int  maxDisplacement;
int mode = 0;

void setup() { 
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(brightness);
  matrix.setTextColor(colors[0]);
}

int y = matrix.height();
int x = matrix.width();
int pass = 0;
int line_pass = 0;

void loop() {
    
  // if mode greater than numMode reset
  if (mode > numMode) { mode = 0; }
  
  matrix.fillScreen(0);
  matrix.setCursor(x, 0);
  scroll(slogans[mode],20);
}

// this does the magic of scrolling
void scroll(char* message,int delays) {
  maxDisplacement = strlen(message) * pixelPerChar + matrix.width();
  if(++line_pass > matrix.width()) line_pass = 0;
  matrix.print(String(message));
  if(--x < -maxDisplacement) {
    x = matrix.width();
    if(++pass >= numColor) { pass = 0;  };
    matrix.setTextColor(colors[pass]);
    mode++;
  }
  matrix.show();
  delay(delays);
}