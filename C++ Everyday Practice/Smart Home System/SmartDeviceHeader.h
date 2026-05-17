#ifndef SMARTDEVICEHEADER_H_INCLUDED
#define SMARTDEVICEHEADER_H_INCLUDED

#include <iostream>
#include <string>

class SmartDevice
{
protected:
    string brand;
    bool isOn;

public:
    bool isOn();
    void toggle();
    void showStatus();

};

class SmartSpeaker
{

};



#endif // SMARTDEVICEHEADER_H_INCLUDED
