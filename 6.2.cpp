//6.2

#include<iostream>
#include<cctype>
const int Num = 10;
int main()
{
	using namespace std;
	double donation[Num] = {}, aver = 0;
	int count = 0, num = 0;

	cout << "Enter the donation: ";

	//数据输入
	for (int i = 0; i<Num; i++)
	{
		cin >> donation[i];
		if (!cin.fail())
		{
			++count;
			aver += donation[i];
		}
		else break;
	}
	//判断是否有数据输入
	if (count == 0)
	{
		cout << "There no donation.\n";
		return 0;
	}
	//计算平均值即大于平均值的个数
	aver = aver / count;
	for (int i = 0; i<count; i++)
	{
		if (donation[i]>aver)
			++num;
	}
	cout << "The average is " << aver << endl;
	cout << "There are " << num << " above than the average.\n";

	return 0;
}