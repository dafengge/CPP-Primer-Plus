//2.6

#include<iostream>
double lgtoau(double n);

int main()
{
    using namespace std;
	
	double l;
	cout<<"Enter the number of light years:";
	cin>>l;
	cout<<l<<" light years = "<<lgtoau(l)<<" astronomical unit."<<endl;
	
	return 0;
}

double lgtoau(double n)
{
    return n*63240;
}