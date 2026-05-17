#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float fahrenheit=0;
    cout <<"Enter the value of Fahrenheit: ";
    cin >> fahrenheit;

    float fahrenheitToCelsius=(5.0/9.0)*(fahrenheit-32);

    cout <<"Celsius: " << (int((fahrenheitToCelsius)*100))/100.0;


    return 0;
}
