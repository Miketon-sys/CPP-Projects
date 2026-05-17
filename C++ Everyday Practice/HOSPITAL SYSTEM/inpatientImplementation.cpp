#include "inpatient.h"
#include <iostream>

using namespace std;

inpatient::inpatient() : patient()
{
    roomNumber="none";
    daysAdmitted=0;
}

inpatient::inpatient(string n,int a,string d, string rn, int da) : patient(n,a,d)
{
    roomNumber=rn;
    daysAdmitted=da;
}

int inpatient::getDaysAdmitted()
{
    return daysAdmitted;
}

string inpatient::getRoomNumber()
{
    return roomNumber;
}

void inpatient::setRoomNumber(string ra)
{
    roomNumber=ra;
}

void inpatient::setDaysAdmitted(int da)
{
    daysAdmitted=da;
}

void inpatient::printInfo()
{
    patient::printInfo();
    cout<<"Room Number: "<<roomNumber<<endl;
    cout<<"Days Admitted: "<<daysAdmitted<<endl<<endl;
}

double inpatient::billAmount()
{
    return daysAdmitted*1500;
}

inpatient::~inpatient()
{
}
