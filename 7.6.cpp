//7.6

#include<iostream>
int Fill_array(double a[],int n);         //输入数组并反回输入次数
void Show_array(const double a[],int n);        //显示数组元素
void Reverse_array(double a[],int n);     //反转数组元素
const int Num=10;

int main()
{
	double * test=new double[Num];
	int num=Fill_array(test,Num);
	Show_array(test,num);
	Reverse_array(test,num);
	Show_array(test,num);
	Reverse_array(test+1,num-2);
	Show_array(test,num);
	
	delete [] test;
	return 0;
}

int Fill_array(double a[],int n)
{
    using namespace std;
	cout<<"Enter "<<Num<<" double numbers:\n";
	double temp=0;
	int i=0;
	while(cin>>temp&&i<n)
	{
	    a[i]=temp;
		i++;
		cout<<"Next: ";
	}
	
	return i;
}

void Show_array(const double a[],int n)
{
    using namespace std;
	cout<<"The numbers in the array are:\n";
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	cout<<endl;
}

void Reverse_array(double a[],int n)
{
    double temp=0;
	for (int i=0;i<n/2;i++)
	{
	    temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}