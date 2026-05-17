#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the radius: ";
    double radius=0;
    cin>>radius;

    const double pi=3.1415926;

    double areaOfCircle=pi*radius*radius;

    cout<<"Area: " <<areaOfCircle;
}
