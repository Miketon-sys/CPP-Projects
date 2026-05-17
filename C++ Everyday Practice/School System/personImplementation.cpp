#include <iostream>
#include "person.h"

person::person()
{
    name="unknown";
    age=0;
}
person::person(string n,int a)
{
    name=n;
    age=a;
}
void person::setName(string n)
{
    name=n;
}
void person::setAge(int a)
{
    age=a;
}
string person::getName()
{
    return name;
}
int person::getAge()
{
    return age;
}
void person::printInfo()
{
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
}
person::~person()
{
}
