//5.6

#include<iostream>
#include<string>
const int Year=3;
const int Num=12;

int main()
{
    using namespace std;
	int sale[Year][Num]={};       //每月销售量
	int ysum[Year]={},ssum=0;              //全年总销售量和总销售量
	string month[Num]={"Jan","Feb","Mar","Apr","May","Jun",
	                   "Jul","Aug","Sep","Oct","Nov","Dec"};
	cout<<"请输入各月份销售量：\n";
	for (int i=0;i<Year;++i)
	{
	    cout<<"第"<<i+1<<"年：";
	    for (int j=0;j<Num;++j)
	    {
			cout<<month[j]<<": ";
	    	cin>>sale[i][j];
	    	ysum[i]+=sale[i][j];
			ssum+=sale[i][j];
	    }
	}
	for (int i=0;i<Year;++i)
	cout<<"第"<<i+1<<"年销售量为："<<ysum[i]<<endl;
	cout<<"总销售量为："<<ssum<<endl;
	
	return 0;
}