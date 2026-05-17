#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, reverseStr;
    cin>>str;

    int strSize = str.size();

    //cout<<strSize;

    for(int i=strSize-1;i>=0;i--)
    {
        reverseStr+=str[i];
    }

    if(reverseStr==str)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
