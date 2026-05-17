#ifndef FACULTY_H_INCLUDED
#define FACULTY_H_INCLUDED
#include "person.h"
#include <string>

using namespace std;

class faculty : public person
{
public:
    faculty();
    faculty(string,int,string,string,double,int);
    void setDepartment(string);
    void setSalary(double);
    void setYearsOfService(int);
    string getDeppartment();
    double getSalary();
    int getYearsOfService();
    void printInfo();
    double computeBonus();
    bool isSenior();
    string getRank();
    ~faculty();
private:
    string department;
    double salary;
    int yearsOfService;
};


#endif // FACULTY_H_INCLUDED
