#include <iostream>
#include "classroom.h"

using namespace std;

int main()
{
    classroom c1("CSDC101");
    student s1("Mike",19,"BSCS",1.75);
    student s2("Aivan",20,"BSIT",2.00);
    student s3("Juan",18,"BSCS",3.50);

    c1.addStudent(s1);
    c1.addStudent(s2);
    c1.addStudent(s3);

    c1.printAll();

    return 0;
}
