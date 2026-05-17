#include <iostream>
#include "person.h"

using namespace std;

person::person()
{
    name="unknown";
    age=0;
    email="unknown";
}
person::person(string n,int a,string e)
{
    name=n;
    age=a;
    email=e;
}
void person::setName(string n)
{
    name=n;
}
void person::setAge(int a)
{
    age=a;
}
void person::setEmail(string e)
{
    email=e;
}
string person::getName()
{
    return name;
}
int person::getAge()
{
    return age;
}
string person::getEmail()
{
    return email;
}
void person::printInfo()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Email: "<<email<<endl;
}
person::~person()
{

}
