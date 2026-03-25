#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> twoPowTenList(1000,"2");
    string result("2");
    string finalResult;
    int carry=0;
    string revFinalResult;
    int count=2;


    for(int i=1; i<twoPowTenList.size(); i++)
    {
        int carry=0;
        int n=result.size();
        int product;
        finalResult.clear();
        revFinalResult.clear();
        for(int j=n-1; j>=0; j--)
        {
            product=(result[j]-'0')*2+carry;
            carry=0;
            if(product/10!=0)
            {
                carry=product/10;
            }
            finalResult.push_back((product%10)+'0');
        }
        while(carry>0)
        {
            finalResult.push_back((carry%10)+'0');
            carry/=10;
        }


        for(int j=finalResult.size()-1; j>=0; j--)
        {
            revFinalResult.push_back(finalResult.at(j));
        }
        result=revFinalResult;
        //cout<<count++<<": "<<result<<endl;

    }

    long long sumOfDigits=0;
    for(int i=0;i<result.size();i++)
    {
        sumOfDigits+=result.at(i)-'0';
    }

    cout<<"Sum of Digits of 2 to the power of 1000: "<<sumOfDigits;

    return 0;
}
