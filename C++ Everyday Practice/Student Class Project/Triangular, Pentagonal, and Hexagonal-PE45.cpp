#include <iostream>
#include <string>
using namespace std;

void reverseStr(string& str)
{
    int s=str.size();
    s--;
    for(int i=0; i<s; i++)
    {
        char temp=str[i];
        str[i]=str[s];
        str[s]=temp;
        s--;
    }
}

string intToString(int num)
{
    string result;
    while(num>0)
    {
        result.push_back(num%10);
        num/=10;
    }
    reverseStr(result);

    return result;
}


string divideString(string str, int i)
{
    string result;
    int remainder=0;
    for(int i=0; i<str.size(); i++)
    {
        int quotient=(str[i]-'0'+remainder*10)/2;
        remainder=(str[i]-'0'+remainder*10)%2;
        result.push_back((quotient%10)+'0');
    }
    return result;
}

string multiplyNum(int num1, int num2)
{
    string result;
    int carry=0;
    while(num1>0)
    {
        int product=(num1%10)*num2+carry;
        result.push_back((product%10)+'0');
        carry=product/10;
        num1/=10;
    }
    while(carry>0)
    {
        result.push_back((carry%10)+'0');
        carry/=10;
    }

    reverseStr(result);
    return result;
}


string getTriangular(int n)
{
    return divideString(multiplyNum(n,n+1),2);
}

string getPentagonal(int n)
{
    return divideString(multiplyNum(n,3*n-1),2);
}

string getHexagonal(int n)
{
    return multiplyNum(n,2*n-1);
}


int main()
{
    int tStart=2;
    int pStart=2;
    int hStart=2;
    for(int t=tStart; true; t++)
    {
        string triangle=getTriangular(t);
        cout<<t<<": "<<triangle<<" ";
        for(int p=t; p>=pStart; p++)
        {

            string pentagon=getPentagonal(p);
            if(triangle<pentagon)
                break;
            if(pentagon==triangle)
            {
                if(pentagon[0]=='0')
                    pentagon.erase(0,1);
                for(int h=p; h>=hStart; h++)
                {

                    string hexagon=getHexagonal(h);
                    if(pentagon<hexagon)
                        break;
                    if(pentagon==hexagon)
                    {
                        cout<<pentagon;
                        return h;
                    }

                }
            }
        }
        cout<<endl;
    }


    return 0;
}
