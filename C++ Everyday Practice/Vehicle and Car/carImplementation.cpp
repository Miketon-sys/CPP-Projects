#include <iostream>
#include <string>
#include "car.h"

using namespace std;

car::car():vehicle()
{
    doors=0;
}
car::car(string b,int y,int d):vehicle(b,y)
{
    doors=d;
}
void car::setDoors(int d)
{
    doors=d;
}
int car::getDoors()
{
    return doors;
}
void car::printInfo()
{
    vehicle::printInfo();
    cout<<"Doors: "<<doors<<endl;
}
int car::totalWheels()
{
    return 4;
}
car::~car()
{
}
