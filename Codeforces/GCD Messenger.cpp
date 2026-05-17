#include <iostream>
#include <string>
#include <vector>
using namespace std;

//data structures
struct Student
{
    string name;
    vector <int> nums;
    long long Listlcm;
};

//functions
int       gcd(int a, int b);
long long lcm(int a, int b);
string    buildMessage(const Student& s1, const Student& s2);
void      computeListLCM(Student& s);
void      printReport(const Student& s1, const Student& s2);

int main()
{
    int k=2;
    cin>>k;
    if(k<2 || k>20)
    {
        cout<<"Error! K must be 2 ≤ k ≤ 20";
        return -1;
    }
    vector<Student> s;

    for(int i=0;i<2;i++)
    {
        Student temp;
        cin>>temp.name;
        for(int j=0;j<k;j++)
        {
            int num;
            cin>>num;
            temp.nums.push_back(num);
        }
        computeListLCM(temp);
        s.push_back(temp);
    }

    printReport(s[0],s[1]);

    return 0;
}

int gcd(int a, int b)
{
    int limit;
    if(a>b)
    {
        limit=a;
    }
    else
    {
        limit=b;
    }

    int gcd=limit;

    for(int i=2;i<limit;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
long long lcm(int a, int b)
{
    long long leastComMulti=a*b;


    for(int i=((a>b)?b:a);i<leastComMulti;i++)
    {
        if(i%a==0 && i%b==0)
        {
            leastComMulti=i;
            break;
        }
    }

    return leastComMulti;
}
string buildMessage(const Student& s1, const Student& s2)
{
    string result= to_string(gcd(s1.nums[0],s2.nums[0]));

    for(int i=1;i<s1.nums.size();i++)
    {
        result.append("-"+to_string(gcd(s1.nums[i],s2.nums[i])));
    }
    return result;
}
void computeListLCM(Student& s)
{
    int sizeNum=s.nums.size();
    long long int a=lcm(s.nums[0],s.nums[1]);
    if(sizeNum%2!=0)
    {
        for(int i=2;i<sizeNum-1;i++)
        {
            a=lcm(a,s.nums[i]);
        }
        a=lcm(a,s.nums[sizeNum-1]);
    }
    else
    {
        for(int i=2;i<sizeNum;i++)
        {
            a=lcm(a,s.nums[i]);
        }
    }

    s.Listlcm=a;
}
void      printReport(const Student& s1, const Student& s2)
{
    cout<<"Message: "<<buildMessage(s1,s2)<<endl;
    cout<<s1.name<<" LCM: "<<s1.Listlcm<<endl;
    cout<<s2.name<<" LCM: "<<s2.Listlcm<<endl;
    cout<<"Larger LCM: ";
    if(s1.Listlcm==s2.Listlcm)
    {
        cout<<"tie";
    }
    else if(s1.Listlcm>s2.Listlcm)
    {
        cout<<s1.name;
    }
    else
    {
        cout<<s2.name;
    }
}


