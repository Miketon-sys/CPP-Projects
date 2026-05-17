#ifndef DEPARTMENT_H_INCLUDED
#define DEPARTMENT_H_INCLUDED

#include <string>
#include <vector>
#include "faculty.h"
#include "student.h"

using namespace std;

class department
{
public:
    department();
    department(string);
    void addFaculty(faculty);
    void addStudent(student);
    void printAllFaculty();
    void printAllStudents();
    int getFacultyCount();
    int getStudentCount();
    double totalSalary();
    double totalBonus();
    void printSeniorFaculty();
    void printHonorsStudents();
    void printAtRiskStudents();
    faculty getHighestPaid();
    student getLowestGwa();
    ~department();
private:
    string deptName;
    vector<faculty> facultyList;
    vector<student> studentList;
};

#endif // DEPARTMENT_H_INCLUDED
