//3.3

#include<iostream>

int main()
{
    using namespace std;
	const float deTOm=60;
	int degrees=0,minutes=0,seconds=0;
	float hdegree=0;
	
	cout<<"Enter a latitude in degree, minutes, seconds:"<<endl;
	cout<<"First,enter the degrees:";
	cin>>degrees;
	cout<<"Next,enter the minutes of arc:";
	cin>>minutes;
	cout<<"Finally,enter the seconds of arc:";
	cin>>seconds;
	hdegree=degrees+minutes/deTOm+seconds/(deTOm*deTOm);
	cout<<degrees<<" degrees,"<<minutes<<" minutes,"<<seconds<<" seconds = "
	    <<hdegree<<" degrees"<<endl;
	
	return 0;
}