#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct messageReply
{
    string username;
    string reply;
};

int chainCount(vector<messageReply> &Message);


int main()
{
    int n;
    cin>>n;

    vector<messageReply> message(n);

    for(int i=0;i<n;i++)
    {
        cin>>message[i].username;
        if(message[i].username.find("@")==string::npos)
        {
            message[i].reply=message[i].username;
            message[i].username="\0";
        }
        string temp;
        getline(cin, temp);
        message[i].reply.append(temp);
    }

    for(int i=0;i<n;i++)
    {
        cout<<message[i].username<<message[i].reply<<endl;
    }


    return 0;
}


int chainCount(vector<messageReply> &Message)
{

}
