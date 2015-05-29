//3.5

#include<iostream>

int main()
{
    using namespace std;
	long long worldp=0,usp=0;
	
	cout<<"Enter the world's population:";
	cin>>worldp;
	cout<<"Enter the population of the US:";
	cin>>usp;
	cout<<"The population of the US is "<<double(usp)/double(worldp)*100
	    <<"% of the world population"<<endl;
		
	return 0;
}