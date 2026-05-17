#include <iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;

    long int totalSum=1;
    long int constantNumAdd=1;

    for(int i=1;i<=n/2;i++)
    {
        int constantAddMultiple=i*2;
        for(int j=1;j<=4;j++)
        {
            totalSum+=(constantAddMultiple*j + constantNumAdd);
            if(j==4)
            {
                constantNumAdd=constantAddMultiple*j + constantNumAdd;
            }
        }

    }

    cout<<totalSum;


    return 0;
}
