#include <iostream>
using namespace std;

int main()
{
    //Exercise 1.13
    int val=50;
    int sum=0;

    while(val<=100)
    {
        sum+=val;
        ++val;
    }

    cout<<"Sum of numbers from 50 to 100 is "<<sum<<endl;

    //Exercise 1.10

    for(int num=10;num>=0;--num)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    int userInputNum1=0;
    int userInputNum2=0;

    cout<<"Enter two numbers: ";
    cin>>userInputNum1>>userInputNum2;

    if(userInputNum1>userInputNum2)
    {

        for(int numRange=userInputNum1;numRange>=userInputNum2;--numRange)
        {
            cout<<numRange<<" ";
        }
    }
    else
    {
        for(int numRange=userInputNum1;numRange<=userInputNum2;++numRange)
        {
            cout<<numRange<<" ";
        }
    }
    cout<<endl;

    /*
    * Are there advantages or disadvantages to using for and while?
    * yes they are, while loops are good if you want to or dont have a fixed value to be compared in you condition
    */

    return 0;
}
