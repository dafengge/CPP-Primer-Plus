//7.4

#include<iostream>
long double probability(unsigned  number1,unsigned  number2,unsigned  picks1,unsigned  picks2);

int main()
{
    using namespace std;
	unsigned int fn1=0,fn2=0,choices1=0,choices2=0;
	while (true)
	{
		cout<<"Enter the two field numbers(q to quit):\n";
		cin>>fn1>>fn2;
		if(!cin)            //输入错误
		    break;
		cout<<"The two numbers of picks allowed:\n";
		cin>>choices1>>choices2;
		if((!cin)&&(choices1>fn1)&&(choices2>fn2))    //输入错误
		    break;
		cout<<"You have one chance in ";
		cout<<probability(fn1,fn2,choices1,choices2);
		cout<<" of winning.\n";
	}
	cout<<"bye\n";
	
    return 0;
}

long double probability(unsigned  number1,unsigned  number2,unsigned  picks1,unsigned  picks2)
{
    long double result1=1,result2=1;
	long double n;
	unsigned p;
	for (n=number1,p=picks1;p>0;n--,p--)
	    result1=result1*n/p;
	for (n=number2,p=picks2;p>0;n--,p--)
	    result2=result2*n/p;
	
	return result1*result2;
}