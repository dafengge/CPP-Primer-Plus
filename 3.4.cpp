//3.4

#include<iostream>

int main()
{
    using namespace std;
	const int scTmi=60;
	const int hrToday=24;
	long second=0,minute=0,hour=0,day=0,left=0;
	
	cout<<"Enter the number of seconds:";
	cin>>left;
	minute=left/scTmi;
	second=left%scTmi;
	hour=minute/scTmi;
	minute=minute%scTmi;
	day=hour/hrToday;
	hour=hour%hrToday;
	cout<<left<<" seconds = "<<day<<" days, "<<hour<<" hours, "
	    <<minute<<" minutes, "<<second<<" seconds"<<endl;
		
	return 0;
}