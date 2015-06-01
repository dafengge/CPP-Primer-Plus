//5.3

#include<iostream>

int main()
{
    using namespace std;
	double num=0,sum=0;
	int count=0;
    cout<<"请输入数字：";
	cin>>num;
	while(num!=0)
	{
	    count++;
		cout<<"已输入"<<count<<"个数字。\n";
		sun+=num;
		cout<<"输入数字和为："<<sum<<endl<<endl;
		cout<<"请输入数字：";
	    cin>>num;
	}
	
	return 0;
}