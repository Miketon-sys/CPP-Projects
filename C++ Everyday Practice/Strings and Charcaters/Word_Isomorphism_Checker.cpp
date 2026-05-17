#include <iostream>
#include <string>

bool areIsomorphic(const std::string& s1, const std::string& s2);

int main()
{
    if(areIsomorphic("cdd", "abb"))
    {
        std::cout<<"Isomorphic"<<std::endl;
    }
    else
    {
        std::cout<<"Not Isomporphic"<<std::endl;
    }
    return 0;
}

bool areIsomorphic(const std::string& s1, const std::string& s2)
{
    char firstPattern[256];
    char secondPattern[256];

    if(s1.length() != s2.length())
    {
        return false;
    }

    for(int i=0;i<s1.length();i++)
    {
        firstPattern[i]=-1;
        secondPattern[i]=-1;
    }
    
    for(int i=0;i<s1.length();i++)
    {
        char c1=s1[i];
        char c2=s2[i];
        
        if(firstPattern[c1]==-1 && secondPattern[c2]==-1)
        {
            firstPattern[i]=c2;
            secondPattern[i]=c1;
        }
        else
        {
            if(firstPattern[c1]!=c2 || secondPattern[c2]!=c1)
            {
                return false;
            }
        }
    }

    return false;
}
