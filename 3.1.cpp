//3.1
#include<iostream>

int main()
{
    using namespace std;
	const int heights=12;
	int h=0;
	
	cout<<"Enter your height:"<<"_____\b\b\b\b\b";
	cin>>h;
	cout<<"Your height is "<<h/heights<<"ft "<<h%heights<<"in"<<endl;
	
	return 0;
}