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
 
int x;
  x = random(0,1);
  
  

  
#define a0 led = 0; red = 0; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();
  
#define a1 led = 1; red = 0; green = 10; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();
     
#define a2 led = 2; red = 0; green = 20; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();
  
#define a3 led = 3; red = 0; green = 30; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();
  
#define a4 led = 4; red = 0; green = 40; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();

#define a5 led = 5; red = 0; green = 50; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();
 
#define a6 led = 6; red = 0; green = 60; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white); delay(wait1); strip.show();

#define a7 led = 7; red = 0; green = 70; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1); strip.show();

#define a8 led = 8; red = 0; green = 80; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1); strip.show();

#define a9 led = 9; red = 0; green = 90; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1); strip.show();

#define a10 led = 10; red = 0; green = 100; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();

#define a11 led = 11; red = 0; green = 110; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();
   
#define a12 led = 12; red = 0; green = 120; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();
 
#define a13 led = 13; red = 0; green = 130; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();

#define a14 led = 14; red = 0; green = 140; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();
  
#define a15 led = 15; red = 0; green = 150; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait1);strip.show();

#define b0 led = 0; red = 0; green = 160; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
  
#define b1 led = 1; red = 0; green = 160; blue = 150; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
     
#define b2 led = 2; red = 0; green = 160; blue = 140; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
  
#define b3 led = 3; red = 0; green = 160; blue = 130; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
  
#define b4 led = 4; red = 0; green = 160; blue = 120; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();

#define b5 led = 5; red = 0; green = 160; blue = 110; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
 
#define b6 led = 6; red = 0; green = 160; blue = 100; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();

#define b7 led = 7; red = 0; green = 160; blue = 90; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();

#define b8 led = 8; red = 0; green = 160; blue = 80; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();

#define b9 led = 9; red = 0; green = 160; blue = 70; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();

#define b10 led = 10; red = 0; green = 160; blue = 60; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();

#define b11 led = 11; red = 0; green = 160; blue = 50; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
   
#define b12 led = 12; red = 0; green = 160; blue = 40; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
   
#define b13 led = 13; red = 0; green = 160; blue = 30; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
   
#define b14 led = 14; red = 0; green = 160; blue = 20; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
  
#define b15 led = 15; red = 0; green = 160; blue = 10; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait2);strip.show();
  
#define c0 led = 0; red = 0; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
  
#define c1 led = 1; red = 10; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
     
#define c2 led = 2; red = 20; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
  
#define c3 led = 3; red = 30; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
  
#define c4 led = 4; red = 40; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();

#define c5 led = 5; red = 50; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
 
#define c6 led = 6; red = 60; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();

#define c7 led = 7; red = 70; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();

#define c8 led = 8; red = 80; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();

#define c9 led = 9; red = 90; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();

#define c10 led = 10; red = 100; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();

#define c11 led = 11; red = 110; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
   
#define c12 led = 12; red = 120; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
   
#define c13 led = 13; red = 130; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
   
#define c14 led = 14; red = 140; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();
  
#define c15 led = 15; red = 150; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait3);strip.show();

#define d0 led = 0; red = 160; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
  
#define d1 led = 1; red = 160; green = 150; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
     
#define d2 led = 2; red = 160; green = 140; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
  
#define d3 led = 3; red = 160; green = 130; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
  
#define d4 led = 4; red = 160; green = 120; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();

#define d5 led = 5; red = 160; green = 110; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
 
#define d6 led = 6; red = 160; green = 100; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();

#define d7 led = 7; red = 160; green = 90; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();

#define d8 led = 8; red = 160; green = 80; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();

#define d9 led = 9; red = 160; green = 70; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();

#define d10 led = 10; red = 160; green = 60; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();

#define d11 led = 11; red = 160; green = 50; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
   
#define d12 led = 12; red = 160; green = 40; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
   
#define d13 led = 13; red = 160; green = 30; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
   
#define d14 led = 14; red = 160; green = 20; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();
  
#define d15 led = 15; red = 160; green = 10; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait4);strip.show();

#define e0 led = 0; red = 160; green = 0; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
 
#define e1 led = 1; red = 160; green = 0; blue = 10; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
     
#define e2 led = 2; red = 160; green = 0; blue = 20; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
  
#define e3 led = 3; red = 160; green = 0; blue = 30; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
  
#define e4 led = 4; red = 160; green = 0; blue = 40; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();

#define e5 led = 5; red = 160; green = 0; blue = 50; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
 
#define e6 led = 6; red = 160; green = 0; blue = 60; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();

#define e7 led = 7; red = 160; green = 0; blue = 70; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();

#define e8 led = 8; red = 160; green = 0; blue = 80; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();

#define e9 led = 9; red = 160; green = 0; blue = 90; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();

#define e10 led = 10; red = 160; green = 0; blue = 100; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();

#define e11 led = 11; red = 160; green = 0; blue = 110; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
   
#define e12 led = 12; red = 160; green = 0; blue = 120; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
   
#define e13 led = 13; red = 160; green = 0; blue = 130; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
   
#define e14 led = 14; red = 160; green = 0; blue = 140; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();
  
#define e15 led = 15; red = 160; green = 0; blue = 150; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait5);strip.show();

#define f0 led = 0; red = 160; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
  
#define f1 led = 1; red = 150; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
     
#define f2 led = 2; red = 140; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define f3 led = 3; red = 130; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
  
#define f4 led = 4; red = 120; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define f5 led = 5; red = 110; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
 
#define f6 led = 6; red = 100; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define f7 led = 7; red = 90; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define f8 led = 8; red = 80; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define f9 led = 9; red = 70; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define f10 led = 10; red = 60; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define f11 led = 11; red = 50; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
   
#define f12 led = 12; red = 40; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
   
#define f13 led = 13; red = 30; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
   
#define f14 led = 14; red = 20; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();
  
#define f15 led = 15; red = 10; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait6);strip.show();

#define g0 led = 0; red = 0; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define g1 led = 1; red = 10; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
     
#define g2 led = 2; red = 20; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define g3 led = 3; red = 30; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define g4 led = 4; red = 40; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define g5 led = 5; red = 50; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
 
#define g6 led = 6; red = 60; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define g7 led = 7; red = 70; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define g8 led = 8; red = 80; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define g9 led = 9; red = 90; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define g10 led = 10; red = 100; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define g11 led = 11; red = 110; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define g12 led = 12; red = 120; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define g13 led = 13; red = 130; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define g14 led = 14; red = 140; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define g15 led = 15; red = 150; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define h0 led = 0; red = 160; green = 0; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define h1 led = 1; red = 160; green = 0; blue = 150; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
     
#define h2 led = 2; red = 160; green = 0; blue = 140; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define h3 led = 3; red = 160; green = 0; blue = 130; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define h4 led = 4; red = 160; green = 0; blue = 120; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define h5 led = 5; red = 160; green = 0; blue = 110; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
 
#define h6 led = 6; red = 160; green = 0; blue = 100; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define h7 led = 7; red = 160; green = 0; blue = 90; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define h8 led = 8; red = 160; green = 0; blue = 80; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define h9 led = 9; red = 160; green = 0; blue = 70; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define h10 led = 10; red = 160; green = 0; blue = 60; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait); strip.show();

#define h11 led = 11; red = 160; green = 0; blue = 50; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define h12 led = 12; red = 160; green = 0; blue = 40; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define h13 led = 13; red = 160; green = 0; blue = 30; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define h14 led = 14; red = 160; green = 0; blue = 20; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define h15 led = 15; red = 160; green = 0; blue = 10; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define i0 led = 0; red = 160; green = 0; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define i1 led = 1; red = 160; green = 10; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
     
#define i2 led = 2; red = 160; green = 20; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define i3 led = 3; red = 160; green = 30; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define i4 led = 4; red = 160; green = 40; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define i5 led = 5; red = 160; green = 50; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
 
#define i6 led = 6; red = 160; green = 60; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define i7 led = 7; red = 160; green = 70; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define i8 led = 8; red = 160; green = 80; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define i9 led = 9; red = 160; green = 90; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define i10 led = 10; red = 160; green = 100; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define i11 led = 11; red = 160; green = 110; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define i12 led = 12; red = 160; green = 120; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define i13 led = 13; red = 160; green = 130; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define i14 led = 14; red = 160; green = 140; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define i15 led = 15; red = 160; green = 150; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j0 led = 0; red = 160; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j1 led = 1; red = 150; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
     
#define j2 led = 2; red = 140; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define j3 led = 3; red = 130; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define j4 led = 4; red = 120; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j5 led = 5; red = 110; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
 
#define j6 led = 6; red = 100; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j7 led = 7; red = 90; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j8 led = 8; red = 80; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j9 led = 9; red = 70; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j10 led = 10; red = 60; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define j11 led = 11; red = 50; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define j12 led = 12; red = 40; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define j13 led = 13; red = 30; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define j14 led = 14; red = 20; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define j15 led = 15; red = 10; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define k0 led = 0; red = 0; green = 160; blue = 0; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define k1 led = 1; red = 0; green = 160; blue = 10; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
     
#define k2 led = 2; red = 0; green = 160; blue = 20; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define k3 led = 3; red = 0; green = 160; blue = 30; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define k4 led = 4; red = 0; green = 160; blue = 40; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define k5 led = 5; red = 0; green = 160; blue = 50; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
 
#define k6 led = 6; red = 0; green = 160; blue = 60; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define k7 led = 7; red = 0; green = 160; blue = 70; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define k8 led = 8; red = 0; green = 160; blue = 80; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define k9 led = 9; red = 0; green = 160; blue = 90; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define k10 led = 10; red = 0; green = 160; blue = 100; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define k11 led = 11; red = 0; green = 160; blue = 110; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define k12 led = 12; red = 0; green = 160; blue = 120; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define k13 led = 13; red = 0; green = 160; blue = 130; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define k14 led = 14; red = 0; green = 160; blue = 140; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define k15 led = 15; red = 0; green = 160; blue = 150; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define l0 led = 0; red = 0; green = 160; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define l1 led = 1; red = 0; green = 150; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
     
#define l2 led = 2; red = 0; green = 140; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define l3 led = 3; red = 0; green = 130; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define l4 led = 4; red = 0; green = 120; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define l5 led = 5; red = 0; green = 110; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
 
#define l6 led = 6; red = 0; green = 100; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define l7 led = 7; red = 0; green = 90; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define l8 led = 8; red = 0; green = 80; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define l9 led = 9; red = 0; green = 70; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define l10 led = 10; red = 0; green = 60; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();

#define l11 led = 11; red = 0; green = 50; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define l12 led = 12; red = 0; green = 40; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define l13 led = 13; red = 0; green = 30; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
   
#define l14 led = 14; red = 0; green = 20; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define l15 led = 15; red = 0; green = 10; blue = 160; white = 0; strip.setPixelColor(led, red, green , blue, white);delay(wait);strip.show();
  
#define num0 (a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15)
#define num2  (b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15)
#define num4  (c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15)
#define num6  (d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15)
#define num8  (e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15)
#define num10  (f0,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15)
#define num1  (g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,g11,g12,g13,g14,g15)
#define num3  (h0,h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,h11,h12,h13,h14,h15)
#define num5  (i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15)
#define num7  (j0,j1,j2,j3,j4,j5,j6,j7,j8,j9,j10,j11,j12,j13,j14,j15)
#define num9  (k0,k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15)
#define num11  (l0,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15)
if (x == 1 ) num0;
}
