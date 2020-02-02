// i2c scan
#include "SoftwareI2C.h"

SoftwareI2C softwarei2c;

void setup() {
    Serial.begin(115200);
    softwarei2c.begin(3, 2);       // sda, scl
    Serial.println("begin to scan...");
}

void loop() {
    for (unsigned char i = 1; i <= 127; i++) {
        if (softwarei2c.beginTransmission(i)) {
            Serial.print("0x");
            Serial.println(i, HEX);

            while (1);
        }
        softwarei2c.endTransmission();
    }

    Serial.println("find nothing");
    while (1);

}
