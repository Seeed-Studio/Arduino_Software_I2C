Arduino_SoftWareI2C  [![Build Status](https://travis-ci.com/Seeed-Studio/Arduino_Software_I2C.svg?branch=master)](https://travis-ci.com/Seeed-Studio/Arduino_Software_I2C)
===============


This is an Arduino software I2C Library, you can use the other pin as I2C interface, such D2, D3.

But, you should know that this library can only act as Master.

And, Wire.available() is not correctly supported.

This library include:


    void begin(int Sda, int Scl);                   // setup
    uchar beginTransmission(uchar addr);            // start
    uchar endTransmission();                        // end
    uchar available();                              // bytes available for reading

    uchar write(uchar dta);                         // write a byte
    uchar write(uchar len, uchar *dta);             // write a array
    uchar requestFrom(uchar addr, uchar len);       // request some data
    uchar read();                                   // read a byte



begin() is something different from <Wire.h>, you have to set pin here.
beginTransmission() return the uchar, original not.
available() return the length set by requestFrom().

The others function is just like the hard I2C library.
