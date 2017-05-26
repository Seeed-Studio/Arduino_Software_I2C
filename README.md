Arduino_SoftWareI2C
===============


This is an Arduino software I2C Library, you can use the other pin as I2C interface, such D2, D3.

But, you should know that this library can only act as Master.

And, Wire.available() is not support. 



This library include:


    void begin(int Sda, int Scl);                   // setup
    uchar beginTransmission(uchar addr);            // start
    void endTransmission();                         // end
    uchar available();                              // is getting data

    uchar write(uchar dta);                         // write a byte
    uchar write(uchar len, uchar *dta);             // write a array
    uchar requestFrom(uchar addr, uchar len);       // request some data
    uchar read();                                   // read a byte



begin() is something different from <Wire.h>, you have to set pin here.

The others function is just like the hard I2C library.
