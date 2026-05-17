#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class person
{
public:
    person();
    person(string,int);
    void setName(string);
    void setAge(int);
    string getName();
    int getAge();
    void printInfo();
    ~person();

private:
    string name;
    int age;

};

#endif // PERSON_H_INCLUDED
