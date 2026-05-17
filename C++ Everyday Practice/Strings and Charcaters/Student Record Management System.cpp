#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string studentID;
    string fullName;
    string program;
    int yearLevel;
    double midtermGrade;
    double finalGrade;
    double average;
    string remark;
};

//functions
int getChoice();
void addStudent(vector<Student>& students);
void displayStudents(const vector<Student>& students);
double computeAverage(double midterm, double finalExam);
string getRemark(double average);
int searchByID(const vector<Student>& students, string id);
int searchByName(const vector<Student>& students, string name);
void displayHighestLowest(const vector<Student>& students);
void displayStatistics(const vector<Student>& students);
void sortByName(vector<Student>& students);
void sortByAverage(vector<Student>& students);

int main()
{
    int choice=getChoice();




    return 0;
}


int getChoice()
{
    cout<<"================ STUDENT RECORD MANAGEMENT SYSTEM ================"<<endl;
    cout<<"1. Add Student Record"<<endl;
    cout<<"2. Display All Student Records"<<endl;
    cout<<"3. Search Student by ID"<<endl;
    cout<<"4. Search Student by Name"<<endl;
    cout<<"5. Display Highest and Lowest Average"<<endl;
    cout<<"6. Display Class Statistics"<<endl;
    cout<<"7. Sort by Name"<<endl;
    cout<<"8. Sort by Average"<<endl;
    cout<<"9. Exit"<<endl;
    cout<<"================================================================="<<endl;

    int choice=1;
    cout<<"Enter choice: ";
    cin>>choice;
    if(choice<1 || choice>9)
        return 0;
    return choice;

}
void addStudent(vector<Student>& students)
{
    Student temp;
    cout<<endl<<"Enter Student ID: ";
    cin>>temp.studentID;

    cout<<"Enter Full Name: ";
    cin>>temp.fullName;

    cout<<"Enter Program: ";
    cin>>temp.program;

    cout<<"Enter Year Level: ";
    cin>>temp.yearLevel;

    cout<<"Enter Midterm Grade: ";
    cin>>temp.midtermGrade;

    cout<<"Enter Final Grade: ";
    cin>>temp.finalGrade;

    cout<<"Record added successfully."<<endl;

    students.push_back(temp);
}
void displayStudents(const vector<Student>& students)
{
    for(int i=0;i<students.size();i++)
    {
        cout<<
    }
}
double computeAverage(double midterm, double finalExam);
string getRemark(double average);
int searchByID(const vector<Student>& students, string id);
int searchByName(const vector<Student>& students, string name);
void displayHighestLowest(const vector<Student>& students);
void displayStatistics(const vector<Student>& students);
void sortByName(vector<Student>& students);
void sortByAverage(vector<Student>& students);

