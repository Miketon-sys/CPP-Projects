#include <iostream>
#include <string>
using namespace std;

/* Returns true if two strings are anagrams, false otherwise */
bool isAnagram(const std::string& s1, const std::string& s2);

int main()
{
    string s1,s2;
    cout<<"Enter two words: ";
    cin>>s1>>s2;

    if(isAnagram(s1,s2))
    {
        cout<<"Anagram\n";
    }
    else
    {
        cout<<"Not Anagram\n";
    }

    return 0;
}

/* Returns true if two strings are anagrams, false otherwise */
bool isAnagram(const std::string& s1, const std::string& s2)
{
    int identicalCount=0;

    if(s1.length()!=s2.length())
    {
        return false;
    }

    for(int i=0;i<s1.length();i++)
    {
        char c1=tolower(s1[i]);
        for(int j=0;j<s2.length();j++)
        {
            if(c1==tolower(s2[j]))
            {
                identicalCount++;
            }
        }
    }
    if(identicalCount==s2.length())
    {
        return true;
    }
    return false;
}
