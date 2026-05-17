#include "patient.h"
#include <iostream>

using namespace std;

patient::patient()
{
    name="unknown";
    age=0;
    diagnosis="none";
}

patient::patient(string n,int a,string d)
{
    name=n;
    age=a;
    diagnosis=d;
}

void patient::setAge(int a)
{
    age=a;
}

void patient::setName(string n)
{
    name=n;
}

void patient::setDiagnosis(string d)
{
    diagnosis=d;
}

string patient::getName()
{
    return name;
}

string patient::getDiagnosis()
{
    return diagnosis;
}

int patient::getAge()
{
    return age;
}

void patient::printInfo()
{
    cout<<"Patient Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Diagnosis: "<<diagnosis<<endl;
}

patient::~patient()
{
}
