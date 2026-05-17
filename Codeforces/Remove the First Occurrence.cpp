#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s1;
    cin>>s1;
    string orderedS1;

    for(int i=0;i<s1.size();)
    {
        for(int j=i+1;j<s1.size();j++)
        {
            if(s1[i]>s1[j])
            {
                char temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }

    return 0;
}
