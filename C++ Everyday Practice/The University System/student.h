#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <string>
#include "person.h"

using namespace std;

class student : public person
{
public:
    student();
    student(string,int,string,string,double,int);
    void setCourse(string);
    void setGwa(double);
    void setYearLevel(int);
    string getCourse();
    double getGwa();
    int getYearLevel();
    void printInfo();
    bool isHonors();
    bool isAtRisk();
    string getStanding();
    ~student();

private:
    string course;
    double gwa;
    int yearLevel;
};
#endif // STUDENT_H_INCLUDED
