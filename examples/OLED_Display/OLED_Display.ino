#include "SoftwareI2C.h"
SoftwareI2C WireS1;
SoftwareI2C WireS2;


#include "SeeedGrayOLED.h"
#include <avr/pgmspace.h>

SeeedGrayOLED SeeedGrayOled1;
SeeedGrayOLED SeeedGrayOled2;


void setup() {
    SeeedGrayOled1.initSoftwareI2C(&WireS1, 3, 2);     // wire, sda, scl

    SeeedGrayOled1.init(SSD1327);
    SeeedGrayOled1.clearDisplay();     //Clear Display.
    SeeedGrayOled1.setNormalDisplay(); //Set Normal Display Mode
    SeeedGrayOled1.setVerticalMode();  // Set to vertical mode for displaying text


    for (char i = 0; i < 12 ; i++) {
        SeeedGrayOled1.setTextXY(i, 0); //set Cursor to ith line, 0th column
        SeeedGrayOled1.setGrayLevel(i); //Set Grayscale level. Any number between 0 - 15.
        SeeedGrayOled1.putString("11111111"); //Print Hello World
    }


    SeeedGrayOled2.initSoftwareI2C(&WireS2, 5, 4);     // wire, sda, scl

    SeeedGrayOled2.init(SSD1327);             //initialize SEEED OLED display
    SeeedGrayOled2.clearDisplay();     //Clear Display.
    SeeedGrayOled2.setNormalDisplay(); //Set Normal Display Mode
    SeeedGrayOled2.setVerticalMode();  // Set to vertical mode for displaying text

    for (char i = 0; i < 12 ; i++) {
        SeeedGrayOled2.setTextXY(i, 0); //set Cursor to ith line, 0th column
        SeeedGrayOled2.setGrayLevel(i); //Set Grayscale level. Any number between 0 - 15.
        SeeedGrayOled2.putString("00000000"); //Print Hello World
    }


}

void loop() {

}



