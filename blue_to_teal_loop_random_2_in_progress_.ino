
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 500

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;


void loop() {
  int wait1 = random(150);
  int wait2 = random(150);
  int wait3 = random(150);
  int wait4 = random(150);
  int wait5 = random(150);
  int wait6 = random(150);
 
  #define q0 = (num1 led = 0; red = 0; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();)
  
  #define q1 = (led = 1; red = 0; green = 10; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();)
     
  #define q2 = (led = 2; red = 0; green = 20; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();)
  
  #define q3 = (led = 3; red = 0; green = 30; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();)
  
  #define q4 = (led = 4; red = 0; green = 40; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();)

  #define q5 = (led = 5; red = 0; green = 50; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();)
 
  #define q6 = (led = 6; red = 0; green = 60; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();)

  #define q7 = (led = 7; red = 0; green = 70; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1); strip.show();)

  #define q8 = (led = 8; red = 0; green = 80; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1); strip.show();)

  #define q9 = (led = 9; red = 0; green = 90; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1); strip.show();)

  #define q10 = (led = 10; red = 0; green = 100; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();)

  #define q11 = (led = 11; red = 0; green = 110; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();)
   
    led = 12; red = 0; green = 120; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait1);
   strip.show();
   
    led = 13; red = 0; green = 130; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait1);
   strip.show();
   
   led = 14; red = 0; green = 140; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait1);  
   strip.show();
  
  led = 15; red = 0; green = 150; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait1);
  strip.show();

  #define num3 led = 0; red = 0; green = 160; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
  strip.show();
  
  led = 1; red = 0; green = 160; blue = 150; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
  strip.show();
     
  led = 2; red = 0; green = 160; blue = 140; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
  strip.show();
  
  led = 3; red = 0; green = 160; blue = 130; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
  strip.show();
  
  led = 4; red = 0; green = 160; blue = 120; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();

  led = 5; red = 0; green = 160; blue = 110; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();
 
  led = 6; red = 0; green = 160; blue = 100; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();

    led = 7; red = 0; green = 160; blue = 90; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();

    led = 8; red = 0; green = 160; blue = 80; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();

    led = 9; red = 0; green = 160; blue = 70; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();

    led = 10; red = 0; green = 160; blue = 60; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();

    led = 11; red = 0; green = 160; blue = 50; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();
   
    led = 12; red = 0; green = 160; blue = 40; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();
   
    led = 13; red = 0; green = 160; blue = 30; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
   strip.show();
   
   led = 14; red = 0; green = 160; blue = 20; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);  
   strip.show();
  
  led = 15; red = 0; green = 160; blue = 10; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait2);
  strip.show();
  


  led = 0; red = 0; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
  strip.show();
  
  led = 1; red = 10; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
  strip.show();
     
  led = 2; red = 20; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
  strip.show();
  
  led = 3; red = 30; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
  strip.show();
  
  led = 4; red = 40; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();

  led = 5; red = 50; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();
 
  led = 6; red = 60; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();

    led = 7; red = 70; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();

    led = 8; red = 80; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();

    led = 9; red = 90; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();

    led = 10; red = 100; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();

    led = 11; red = 110; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();
   
    led = 12; red = 120; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();
   
    led = 13; red = 130; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
   strip.show();
   
   led = 14; red = 140; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);  
   strip.show();
  
  led = 15; red = 150; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait3);
  strip.show();


  #define num7 led = 0; red = 160; green = 160; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
  strip.show();
  
  led = 1; red = 160; green = 150; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
  strip.show();
     
  led = 2; red = 160; green = 140; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
  strip.show();
  
  led = 3; red = 160; green = 130; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
  strip.show();
  
  led = 4; red = 160; green = 120; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();

  led = 5; red = 160; green = 110; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();
 
  led = 6; red = 160; green = 100; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();

    led = 7; red = 160; green = 90; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();

    led = 8; red = 160; green = 80; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();

    led = 9; red = 160; green = 70; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();

    led = 10; red = 160; green = 60; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();

    led = 11; red = 160; green = 50; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();
   
    led = 12; red = 160; green = 40; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();
   
    led = 13; red = 160; green = 30; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
   strip.show();
   
   led = 14; red = 160; green = 20; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);  
   strip.show();
  
  led = 15; red = 160; green = 10; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait4);
  strip.show();

  
  #define num9 led = 0; red = 160; green = 0; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
  strip.show();
  
  led = 1; red = 160; green = 0; blue = 10; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
  strip.show();
     
  led = 2; red = 160; green = 0; blue = 20; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
  strip.show();
  
  led = 3; red = 160; green = 0; blue = 30; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
  strip.show();
  
  led = 4; red = 160; green = 0; blue = 40; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();

  led = 5; red = 160; green = 0; blue = 50; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();
 
  led = 6; red = 160; green = 0; blue = 60; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();

    led = 7; red = 160; green = 0; blue = 70; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();

    led = 8; red = 160; green = 0; blue = 80; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();

    led = 9; red = 160; green = 0; blue = 90; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();

    led = 10; red = 160; green = 0; blue = 100; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();

    led = 11; red = 160; green = 0; blue = 110; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();
   
    led = 12; red = 160; green = 0; blue = 120; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();
   
    led = 13; red = 160; green = 0; blue = 130; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
   strip.show();
   
   led = 14; red = 160; green = 0; blue = 140; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);  
   strip.show();
  
  led = 15; red = 160; green = 0; blue = 150; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait5);
  strip.show();

  #define num11 led = 0; red = 160; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
  strip.show();
  
  led = 1; red = 150; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
  strip.show();
     
  led = 2; red = 140; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
  strip.show();
  
  led = 3; red = 130; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
  strip.show();
  
  led = 4; red = 120; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();

  led = 5; red = 110; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();
 
  led = 6; red = 100; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();

    led = 7; red = 90; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();

    led = 8; red = 80; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();

    led = 9; red = 70; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();

    led = 10; red = 60; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();

    led = 11; red = 50; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();
   
    led = 12; red = 40; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();
   
    led = 13; red = 30; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
   strip.show();
   
   led = 14; red = 20; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);  
   strip.show();
  
  led = 15; red = 10; green = 0; blue = 160; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait6);
  strip.show();


}
