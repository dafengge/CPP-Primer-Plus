//3.7

#include<iostream>

int main()
{
    using namespace std;
	const double kmTom=62.14;
	const double LTog=3.875;
	double kpL=0;
	
	cout<<"Enter the fuel cost in Eur style:";
	cin>>kpL;
	cout<<"The fuel cost in US style is:"<<kmTom/(kpL/LTog)<<"mpg"<<endl;
	
	return 0;
}