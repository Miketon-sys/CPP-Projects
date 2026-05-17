#include <iostream>
#include <string>
using namespace std;

string reverseString(string str)
{
    string result="";
    for(int i=str.size()-1;i>=0;i--)
    {
        result.push_back(str.at(i));
    }
    return result;
}

string stringMult(string num1,int num2)
{
    string result="";
    long int carry=0;

    for(int i=num1.size()-1; i>=0; i--)
    {
        long int product=(num1[i]-'0')*num2+carry;
        carry=0;
        if(product/10!=0)
            carry=product/10;
        result.push_back(product%10+'0');
    }
    while(carry>0)
    {
        result.push_back(carry%10+'0');
        carry/=10;
    }

    return reverseString(result);
}

string factorial(int n)
{
    string result("1");

    for(int i=1; i<=n; i++)
    {
        result=stringMult(result,i);
    }
    return result;
}

int sumOfDigits(string str)
{
    long int result=0;
    for(int i=0;i<str.size();i++)
    {
        result+=(str.at(i)-'0');
    }
    return result;
}


int main()
{
    cout<<sumOfDigits(factorial(100));
}
