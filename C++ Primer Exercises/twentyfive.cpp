#include <iostream>
using namespace std;

int main()
{
	int minNum=10,maxNum=25, currentNum;
	cout<<"Enter the number: "<<endl;
	cin>>currentNum;
	
	while(currentNum<10 || currentNum>25)
	{
		cout<<"Inalid input! It must be greater than or equal to 10 OR less than or equal to 25."<<endl;
		cin>>currentNum;
	}
	cout<<"Number accepted!";
	return 0;
}