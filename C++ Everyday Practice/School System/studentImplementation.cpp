#include "student.h"

student::student():person()
{
    course="Unknown";
    gwa=0.0;
}
student::student(string n,int a,string c,double g):person(n,a)
{
    course=c;
    gwa=g;
}
void student::setCourse(string c)
{
    course=c;
}
void student::setGwa(double g)
{
    gwa=g;
}
string student::getCourse()
{
    return course;
}
double student::getGwa()
{
    return gwa;
}
void student::printInfo()
{
    person::printInfo();
    cout<<"Course: "<<course<<endl<<"GWA: "<<gwa<<endl;
}
bool student::isPassing()
{
    if(gwa<=3.0 && gwa>=1.0)
        return true;
    return false;
}
student::~student()
{
}
