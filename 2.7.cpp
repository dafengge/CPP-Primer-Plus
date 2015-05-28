//2.7

#include<iostream>
using namespace std;
viod timeshow(int h, int m);

int main()
{
    int hour=0,minute=0;
	cout<<"Enter the number of hours:";
	cin>>hour;
	cout<<"Enter the number of minutes:";
	cin>>minute;
	timeshow(hour,minute);
	
	return 0;
}

void timeshow(int h,int m)
{
    cout<<"Time: "<<h<<":"<<m<<endl;
}