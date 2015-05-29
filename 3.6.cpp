//3.6

#include<iostream>

int main()
{
    using namespace std;
	double km=0,fuel=0;
	cout<<"Enter the distance:";
	cin>>km;
	cout<<"Enter the fuel you spend:";
	cin>>fuel;
	cout<<"The cost of the car is:"<<fuel/km*100<<"L/100km"<<endl;
	
	return 0;
}