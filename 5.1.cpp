//5.1

#include<iostream>

int main()
{
    using namespace std;
	int fsnum=0,sdnum=0;       //输入的第一个和第二个数
	int sum=0;               //两个数之间的和
	
	cout<<"请输入第一个整数：";
	cin>>fsnum;
	cout<<"请输入第二个整数：";
	cin>>sdnum;
	
	for (int i=fsnum;i<=sdnum;++i)
	    sum+=i;
	cout<<"两个数之间整数之和为："<<sum<<endl;
	
	return 0;
}