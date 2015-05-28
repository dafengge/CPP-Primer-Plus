//2.5

#include<iostream>
double cetofa(double n);

int main()
{
    using namespace std;
	
	double c;
	cout<<"Please enter a Celsius value:"
	cin>>c;
	cout<<c<<" degree Celsius is "<<cetofa(c)<<" Fahrenheit"<<endl;
	
	return 0;
}

double cetofa(double n)
{
    return 1.8*n+32.0;
}