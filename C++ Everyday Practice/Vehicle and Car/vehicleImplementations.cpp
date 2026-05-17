#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

vehicle::vehicle()
{
    brand="Unknown";
    year=0;
}
vehicle::vehicle(string b, int y)
{
    brand=b;
    year=y;
}
void vehicle::setBrand(string b)
{
    brand=b;
}
void vehicle::setYear(int y)
{
    year=y;
}
string vehicle::getBrand()
{
    return brand;
}
int vehicle::getYear()
{
    return year;
}
void vehicle::printInfo()
{
    cout<<"Brand: "<<brand<<endl<<"Year: "<<year<<endl;
}
vehicle::~vehicle()
{
}
