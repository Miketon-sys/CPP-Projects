#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    cin>>s1;

    int s1Size=s1.size();

    while(s1Size<0 || s1Size>100)
    {
        cin>>s1;
    }

    for(int i=0;i<s1Size;i++)
    {
        switch(s1[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                s1.erase(i--,1);
                s1Size--;

                break;
            default:
                break;

        }
    }

    for(int i=0;i<s1.size();i++)
    {
        if(i%2==0)
            s1.insert(i,".");
    }

    cout<<s1;


    return 0;
}
