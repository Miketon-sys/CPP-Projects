#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED
#include <string>
using namespace std;


class vehicle
{
public:
    vehicle();
    vehicle(string,int);

    void setBrand(string);
    void setYear(int);

    string getBrand();
    int getYear();

    void printInfo();

    ~vehicle();

private:
    string brand;
    int year;
};

#endif // VEHICLE_H_INCLUDED
