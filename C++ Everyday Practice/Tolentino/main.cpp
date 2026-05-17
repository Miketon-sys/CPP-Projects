#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    rectangle r1;
    rectangle r2(8.0,4.0);

    r1.setWidth(5.0);
    r1.setHeight(3.0);

    cout<<"Rectangle 1 Area: "<<r1.area()<<endl<<"Rectangle 1 perimeter:"<<r1.perimeter()<<endl;

    cout<<"Rectangle 2 Area: "<<r2.area()<<endl<<"Rectangle 2 perimeter:"<<r2.perimeter()<<endl;

    return 0;
}
