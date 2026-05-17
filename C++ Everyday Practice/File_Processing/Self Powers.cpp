#include <iostream>
#include <vector>

using namespace std;

vector<int> toPower(int x)
{
    vector<int> result= {1};

    for(int i=0; i<x; i++)
    {
        int carry=0;
        for(int j=0; j<result.size(); j++)
        {
            int tempResult=(result.at(j)*x)+carry;
            carry=tempResult/10;
            result[j]=(tempResult%10);
        }
        while(carry>0)
        {
            result.push_back(carry%10);
            carry/=10;
        }
    }

    if(result.size()<10)
    {
        for(int i=0; i<10; i++)
        {
            result.push_back(0);
        }
    }
    return result;
}

vector<int> lastTenVectorSum(const vector<int>& a,const vector<int>& b)
{
    vector<int> result(10,0);

    int carry=0;
    for(int i=0; i<10; i++)
    {
        int tempResult=a[i]+b[i]+carry;
        result[i]=(tempResult%10);
        carry=tempResult/10;
    }

    return result;
}

int main()
{
    vector<int> lastTenDigits(10,0);


    for(int i=1000; i>=1; i--)
    {
        lastTenDigits=lastTenVectorSum(lastTenDigits,toPower(i));
    }


    for(int i=9;i>=0;i--)
    {
        cout<<lastTenDigits[i];
    }








    return 0;
}
