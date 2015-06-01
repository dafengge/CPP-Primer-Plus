//5.5

#include<iostream>
#include<string>
const int Num=12;

int main()
{
    using namespace std;
	int sale[Num]={};       //每月销售量
	int sum=0;              //全年总销售量
	string month[Num]={"Jan","Feb","Mar","Apr","May","Jun",
	                   "Jul","Aug","Sep","Oct","Nov","Dec"};
	cout<<"请输入各月份销售量：\n";
	for (int i=0;i<Num;++i)
	{
	    cout<<month[i]<<": ";
		cin>>sale[i];
		sum+=sale[i];
	}
	cout<<"全年销售量为："<<sum<<endl;
	
	return 0;
}