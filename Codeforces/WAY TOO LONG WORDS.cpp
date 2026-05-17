#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n<1 || n>100)
        return 1;

    vector<string> result;

    for(int i=0;i<n;i++)
    {
        string temp;
        string str;
        cin>>temp;

        while(temp.size()<1 || temp.size()>100)
        {
            cin>>temp;
        }
        if(temp.size()>10)
        {
            str.push_back(temp.at(0));
            int sizeOfTemp = temp.size()-2;

            string tempNum;
            while(sizeOfTemp>0)
            {
                tempNum.push_back((sizeOfTemp%10)+'0');
                sizeOfTemp/=10;
            }
            for(int j=tempNum.size()-1;j>=0;j--)
            {
                str.push_back(tempNum.at(i));
            }
            str.push_back(temp.at(temp.size()-1));
            result.push_back(str);
        }
        else
        {
            result.push_back(temp);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;

}
