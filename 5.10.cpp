//5.10

#include<iostream>

int main()
{
    using namespace std;
	int num=0;
	cout<<"Enter number of rows: ";
	cin>>num;
	for (int i=0;i<num;i++)
	{
	    for (int j=1;j<(num-i);j++)
		    cout<<" ";
		for (int j=0;j<=i;j++)
		    cout<<"*";
		cout<<endl;
	}
	
	return 0;
}