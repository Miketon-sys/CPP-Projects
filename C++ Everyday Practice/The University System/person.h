#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
using namespace std;

class person
{
public:
    person();
    person(string,int,string);
    void setName(string);
    void setAge(int);
    void setEmail(string);
    string getName();
    int getAge();
    string getEmail();
    void printInfo();
    ~person();

private:
    string name;
    int age;
    string email;
};

#endif // PERSON_H_INCLUDED
