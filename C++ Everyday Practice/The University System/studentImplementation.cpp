#include <iostream>
#include "student.h"

using namespace std;

student::student() : person()
{
    course="unknown";
    gwa=0.00;
    yearLevel=0;
}
student::student(string n,int a,string e,string c,double g,int y) : person(n,a,e)
{
    course=c;
    gwa=g;
    yearLevel=y;
}
void student::setCourse(string c)
{
    course=c;
}
void student::setGwa(double g)
{
    gwa=g;
}
void student::setYearLevel(int y)
{
    yearLevel=y;
}
string student::getCourse()
{
    return course;
}
double student::getGwa()
{
    return gwa;
}
int student::getYearLevel()
{
    return yearLevel;
}
void student::printInfo()
{
    person::printInfo();
    cout<<"Course: "<<course<<endl;
    cout<<"GWA: "<<gwa<<endl;
    cout<<"Year Level: "<<yearLevel<<endl<<endl;
}
bool student::isHonors()
{
    if(gwa<=1.75)
        return true;
    return false;
}
bool student::isAtRisk()
{
    if(gwa>=3.0)
        return true;
    return false;
}
string student::getStanding()
{
    if(isAtRisk())
        return "At Risks";
    else if(isHonors())
        return "Honors";
    else
        return "Regular";
}
student::~student()
{
}
