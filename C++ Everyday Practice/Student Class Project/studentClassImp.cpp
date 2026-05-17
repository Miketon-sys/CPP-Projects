#include <iostream>
#include "studentClass.h"
#include <string>
#include <iomanip>

using namespace std;

    student::student()
    {
        name="unknown";
        idNumber=0;
        gwa=0.0;
    }

    student::student(string n, int num, double g)
    {
        name=n;
        idNumber=num;
        gwa=g;
    }

    void student::printInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<idNumber<<endl;
        cout<<"GWA: "<<setprecision(2)<<gwa<<endl;
    }

    string student::isPassing()
    {
        if(gwa>=1.0 && gwa<=3.0)
            return "true";
        return "false";
    }

    string student::getName()
    {
        return name;
    }
    int student::getIdNumber()
    {
        return idNumber;
    }
    double student::getGwa()
    {
        return gwa;
    }

    void student::setName(string n)
    {
        name=n;
    }
    void student::setIdNumber(int num)
    {
        idNumber=num;
    }
    void student::setGwa(double g)
    {
        gwa=g;
    }

    student::~student()
    {
    }
