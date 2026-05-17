#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include "vehicle.h"

class car:public vehicle
{
public:
    car();
    car(string,int,int);
    void setDoors(int);
    int getDoors();
    void printInfo();
    int totalWheels();
    ~car();

private:
    int doors;

};

#endif // CAR_H_INCLUDED
