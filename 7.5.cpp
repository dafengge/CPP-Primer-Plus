//7.5

#include<iostream>
long factorial(int n);

int main()
{
    using namespace std;
	int n=0;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<n<<"! = "<<factorial(n)<<endl;
	
	return 0;
}

long factorial(int n)
{
    if (n==0)
	    return 1;
	return n*factorial(n-1);
}