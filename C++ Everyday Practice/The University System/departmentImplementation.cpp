#include <iostream>
#include "department.h"
using namespace std;

department::department()
{
    deptName="unknown";
}
department::department(string d)
{
    deptName=d;
}
void department::addFaculty(faculty f1)
{
    facultyList.push_back(f1);
}
void department::addStudent(student s1)
{
    studentList.push_back(s1);
}
void department::printAllFaculty()
{
    int s=getFacultyCount();
    for(int i=0;i<s;i++)
    {
        cout<<"Faculty "<<i+1<<": "<<endl;
        facultyList[i].printInfo();
        cout<<endl;
    }
}
void department::printAllStudents()
{
    int s=getStudentCount();
    for(int i=0;i<s;i++)
    {
        cout<<"Student "<<i+1<<": "<<endl;
        studentList[i].printInfo();
        cout<<endl;
    }
}
int department::getFacultyCount()
{
    return facultyList.size();
}
int department::getStudentCount()
{
    return studentList.size();
}
double department::totalSalary()
{
    double sum=0;
    int s=getFacultyCount();
    for(int i=0;i<s;i++)
    {
        sum+=facultyList[i].getSalary();
    }
    return sum;
}
double department::totalBonus()
{
    double sum=0;
    int s=getFacultyCount();
    for(int i=0;i<s;i++)
    {
        sum+=facultyList[i].computeBonus();
    }
    return sum;
}
void department::printSeniorFaculty()
{
    int s=getFacultyCount();
    for(int i=0;i<s;i++)
    {
        if(facultyList[i].isSenior())
            facultyList[i].printInfo();
    }
}
void department::printHonorsStudents()
{
    int s=getStudentCount();
    for(int i=0;i<s;i++)
    {
        if(studentList[i].isHonors())
            studentList[i].printInfo();
    }
}
void department::printAtRiskStudents()
{
    int s=getStudentCount();
    for(int i=0;i<s;i++)
    {
        if(studentList[i].isAtRisk())
            studentList[i].printInfo();
    }
}
faculty department::getHighestPaid()
{

}
student department::getLowestGwa()
{

}
department::~department()
{
}
