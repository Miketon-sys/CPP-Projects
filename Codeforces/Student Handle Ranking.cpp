#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Student
{
    string name;
    string handle;

};

void studentSort(vector<Student> &students, int n);
void swap(vector<Student> &vecArr, int n);


int main()
{

    vector<Student> students;
    int n;
    cout<<"N: ";
    cin>>n;

    while(n>100 || n<1)
    {
        cout<<"N must not exceed 100 or below 1!\nN: ";
        cin>>n;
    }

    string nameStud;
    string handleStud;

    for(int i=0;i<n;i++)
    {
        Student temp;
        cin>>temp.name;
        cin>>temp.handle;

        students.push_back(temp);
    }

    studentSort(students,n);

    cout<<"Output: \n";

    for(int i=0;i<students.size();i++)
    {
        cout<<students[i].name;
        cout<<" "<<students[i].handle<<"\n";

    }


    return 0;
}

void swap(vector<Student> &vecArr, int n)
{
    Student temp=vecArr[n];
    vecArr[n]=vecArr[n+1];
    vecArr[n+1]=temp;
}


void studentSort(vector<Student> &students, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(students[j].handle.size()>students[j+1].handle.size())
            {
                swap(students, j);
            }
            else if(students[j].handle>students[j+1].handle)
            {
                    swap(students, j);
            }
            if(students[j].handle==students[j+1].handle)
            {
                if(students[j].name>students[j+1].name)
                {
                    swap(students, j);
                }
            }
        }
    }
}

