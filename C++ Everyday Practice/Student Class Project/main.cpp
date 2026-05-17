#include <iostream>
#include "studentClass.h"

using namespace std;

int main()
{
    student s1;
    //student 1
    s1.setGwa(1.25);
    s1.setName("Mike");
    s1.setIdNumber(82);



    student s2("Aivan",1,1.50);

    s1.printInfo();
    s2.printInfo();


    return 0;
}
