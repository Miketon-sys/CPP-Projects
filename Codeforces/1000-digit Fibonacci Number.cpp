#include <iostream>
#include <string>

using namespace std;

int findIndexFn(int totalDigits)
{
    int indexCount=1;

    string result;
    string a="0";
    string b="1";

    while(b.size()!=totalDigits)
    {
        int carry=0;
        //cout<<a<<"+"<<b;
        int sizeOfB=b.size()-1;
        for(int i=a.size()-1; i>=0; i--)
        {
            int tempResult=(b.at(sizeOfB--)-'0')+(a.at(i)-'0')+carry;
            //cout<<tempResult;
            carry=tempResult/10;
            result.push_back(tempResult%10+'0');
        }
        string bLeftOver=b.substr(0,b.size()-a.size());

        for(int i=bLeftOver.size()-1;i>=0;i--)
        {
            int tempResult=(bLeftOver.at(i)-'0')+carry;
            carry=tempResult/10;
            result.push_back(tempResult%10+'0');
        }

        while(carry>0)
        {
            result.push_back(carry%10+'0');
            carry/=10;
        }

        string revResult;

        for(int i=result.size()-1;i>=0;i--)
        {
            revResult.push_back(result.at(i));
        }

        //cout<<a<<"+"<<b<<revResult;

        a=b;
        b=revResult;
        result.clear();
        revResult.clear();
        indexCount++;

        cout<<endl;
    }

    return indexCount;
}

int main()
{
    cout<<findIndexFn(1000);

    return 0;
}
