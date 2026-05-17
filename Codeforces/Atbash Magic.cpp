#include <iostream>
#include <string>

using namespace std;

string atbashTranslator(string source);

int main()
{

    char value = 91;
    cout<<value;

    string paragraphAtbash;
    getline(cin, paragraphAtbash);

    cout<<atbashTranslator(paragraphAtbash);


    return 0;
}

string atbashTranslator(string source)
{
    string output;
    unsigned sourceSize=source.size();

    for(int i=0;i<sourceSize;i++)
    {
        if(!(source[i]>90 && source[i]<=96) && (source[i]>=65 && source[i]<=122))
        {
            output+=static_cast<char>(2*source[i]-40);
        }
        else
        {
            output+=source[i];
        }
        //output+=
    }


    return output;
}
