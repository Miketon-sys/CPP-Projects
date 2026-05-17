#include "classroom.h"

classroom::classroom()
{
    roomCode="Unknown";
}
classroom::classroom(string r)
{
    roomCode=r;
}
void classroom::addStudent(student s)
{
    students.push_back(s);
}
void classroom::printAll()
{
    int s=getCount();
    cout<<"Room: "<<roomCode<<endl<<"Students: "<<s<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<"-----------------"<<endl;
        students[i].printInfo();
    }
    cout<<"-----------------"<<endl;
}
int classroom::getCount()
{
    return students.size();
}
classroom::~classroom()
{
}
