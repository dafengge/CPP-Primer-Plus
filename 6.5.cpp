//6.5

#include<iostream>
int tvarps(unsigned int n);

int main()
{
    using namespace std;
	cout<<"Enter your income:";
	unsigned int count=0;
	cin>>count;
	while(!cin.fail())
	{
	    cout<<"You income tax is: "<<tvarps(count)<<endl;
		cout<<"Enter your income:";
		cin>>count;
	}
	cout<<"Your input is error.\n";
	
	return 0;
}

int tvarps(unsigned int n)
{
    if (n<=5000)
	    return 0;
	else if (n<=15000&&n>5000)
	    return (n-5000)*0.1;
	else if (n<=35000&&n>15000)
	    return (n-15000)*0.15+1000;
	else return (n-35000)*0.2+4000;
}