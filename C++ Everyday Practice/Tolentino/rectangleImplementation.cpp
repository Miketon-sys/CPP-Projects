#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle()
{
    width=0;
    height=0;
}

rectangle::rectangle(double w,double h)
{
    width=w;
    height=h;
}
void rectangle::setWidth(double w)
{
    width=w;
}
void rectangle::setHeight(double h)
{
    height=h;
}
double rectangle::getWidth()
{
    return width;
}
double rectangle::getHeight()
{
    return height;
}
double rectangle::area()
{
    return height*width;
}
double rectangle::perimeter()
{
    return (2*height)+(2*width);
}
rectangle::~rectangle()
{
}
