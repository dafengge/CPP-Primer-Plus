//3.2

#include<iostream>

int main()
{
    using namespace std;
	const int ftToin=12;
	const double inTom=0.0254;
	const double pTokg=2.2;
	int ft=0,in=0;
	double meters=0,pound=0,kg=0;
	
	cout<<"Enter your height:"<<endl<<"ft:";
	cin>>ft;
	cout<<"in:";
	cin>>in;
	in=ft*ftToin+in;
	meters=in*inTom;
	cout<<"Enter your weight:";
	cin>>pound;
	kg=pound*pTokg;
	
	cout<<"Your BMI is:"<<kg/(meters*meters)<<endl;
	
	return 0;
}