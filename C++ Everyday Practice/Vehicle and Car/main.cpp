#include <iostream>
#include "vehicle.h"
#include "car.h"

using namespace std;

int main()
{
    vehicle v1("Toyota",2020);
    v1.printInfo();

    car c1("Honda",2022,4);
    c1.printInfo();
    cout<<"Wheels: "<<c1.totalWheels()<<endl;

    car c2("Ford",2019,2);
    c2.printInfo();

    return 0;
}
