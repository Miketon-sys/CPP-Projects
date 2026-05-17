#include <iostream>
using namespace std;

int main()
{
    //Exercise 1.9
    int val=50;
    int sum=0;

    while(val<=100)
    {
        sum+=val;
        ++val;
    }

    cout<<"Sum of numbers from 50 to 100 is "<<sum<<endl;

    //Exercise 1.10
    int num=10;
    while(num>=0)
    {
        cout<<num<<" ";
        --num;
    }
    cout<<endl;


    //Exercise 1.11
    int userInputNum1=0;
    int userInputNum2=0;

    cout<<"Enter two numbers: ";
    cin>>userInputNum1>>userInputNum2;

    if(userInputNum1>userInputNum2)
    {
        int numRange=userInputNum2;
        while(numRange<=userInputNum1)
        {
            cout<<numRange<<" ";
            ++numRange;
        }
    }
    else
    {
        int numRange=userInputNum1;
        while(numRange<=userInputNum2)
        {
            cout<<numRange<<" ";
            ++numRange;
        }
    }
    cout<<endl;

    return 0;
}
