//7.1

#include<iostream>
double hmnic_aver(double,double);   //计算调和平均数

int main()
{
    using namespace std;
	double a=1,b=1;
	while (true)
	{
	    cout<<"Enter two number(0 to quit): \n";
	    cin>>a>>b;
		if (a==0||b==0)
		    {
			    cout<<"Done!\n";
			    break;
			}
		cout<<"The harmonic average of them is: "<<hmnic_aver(a,b)<<endl;
	}
	
	return 0;
}

double hmnic_aver(double x,double y)
{
    return 2.0*x*y/(x+y);
}