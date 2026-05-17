#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "person.h"

class student:protected person
{
public:
    student();
    student(string,int,string,double);
    void setCourse(string);
    void setGwa(double);
    string getCourse();
    double getGwa();
    void printInfo();
    bool isPassing();
    ~student();
private:
    string course;
    double gwa;
};

#endif // STUDENT_H_INCLUDED
