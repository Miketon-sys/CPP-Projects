#ifndef INPATIENT_H_INCLUDED
#define INPATIENT_H_INCLUDED
#include "patient.h"
#include <string>

using namespace std;

class inpatient : public patient
{
public:
    inpatient();
    inpatient(string,int,string,string,int);
    void setRoomNumber(string);
    void setDaysAdmitted(int);
    string getRoomNumber();
    int getDaysAdmitted();
    void printInfo();
    double billAmount();
    ~inpatient();

private:
    string roomNumber;
    int daysAdmitted;
};

#endif // INPATIENT_H_INCLUDED
