//4.10

#include<iostream>
#include<array>

int main()
{
    using namespace std;
	array<double,3> grade;
	double average;
	
	cout<<"Enter the first 40meters grade: ";
	cin>>grade[0];
	cout<<"Enter the second 40meters grade: ";
	cin>>grade[1];
	cout<<"Enter the third 40meters grade: ";
	cin>>grade[2];
	cout<<endl;
	average=(grade[0]+grade[1]+grade[2])/3;
	cout<<"You enter 3 grades.\n"<<"The average of the grades is "<<average<<endl;
	
	return 0;
}