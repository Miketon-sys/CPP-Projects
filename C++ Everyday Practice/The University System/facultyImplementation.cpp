#include <iostream>
#include "faculty.h"
using namespace std;



faculty::faculty() : person()
{
    department="unknown";
    salary=0.00;
    yearsOfService=0;
}
faculty::faculty(string n,int a,string e,string d,double s,int y) : person(n,a,e)
{
    department=d;
    salary=s;
    yearsOfService=y;
}
void faculty::setDepartment(string d)
{
    department=d;
}
void faculty::setSalary(double s)
{
    salary=s;
}
void faculty::setYearsOfService(int y)
{
    yearsOfService=y;
}
string faculty::getDeppartment()
{
    return department;
}
double faculty::getSalary()
{
    return salary;
}
int faculty::getYearsOfService()
{
    return yearsOfService;
}
void faculty::printInfo()
{
    person::printInfo();
    cout<<"Department: "<<department<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Years in service: "<<yearsOfService<<endl<<endl;
}
double faculty::computeBonus()
{
    return salary*yearsOfService*0.10;
}
bool faculty::isSenior()
{
    if(yearsOfService>=10)
        return true;
    return false;
}
string faculty::getRank()
{
    if(yearsOfService<3)
        return "Instructor";
    else if(yearsOfService<7)
        return "Associate Professor";
    else
        return "Full Processor";
}
faculty::~faculty()
{
}
