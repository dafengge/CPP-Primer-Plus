//5.7

#include<iostream>
#include<string>
struct car{
    std::string make;
	int year;
};

int main()
{
    using namespace std;
	int num=0;
	cout<<"How many cars do you wish to catalog? ";
	cin>>num;
	cin.get();
	car * carinf=new car [num];
	for (int i=0;i<num;i++)
	{
	    cout<<"Car: #"<<i+1<<":\n";
		cout<<"Please enter the make: ";
		getline(cin,carinf[i].make);
		cout<<"Please enter the year made: ";
		cin>>carinf[i].year;
		cin.get();
	}
	cout<<"Here is your collection:\n";
	for (int i=0;i<num;i++)
	    cout<<carinf[i].year<<" "<<carinf[i].make<<endl;
	
    delete [] carinf;	
	return 0;
}