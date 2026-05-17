#ifndef CLASSROOM_H_INCLUDED
#define CLASSROOM_H_INCLUDED
#include "student.h"

class classroom
{
public:
    classroom();
    classroom(string);
    void addStudent(student);
    void printAll();
    int getCount();
    ~classroom();
private:
    string roomCode;
    vector<student>students;
} ;

#endif // CLASSROOM_H_INCLUDED
