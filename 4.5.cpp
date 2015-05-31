//4.5

#include<iostream>

struct CandyBar{
	char brand[20];     //糖品牌名
	float weight;     //重量
	int calory;       //卡路里
};

int main()
{
	using namespace std;
	CandyBar snack = { "Mocha Munch", 2.3, 350 };

	cout << "The brand of the candy is: " << snack.brand << endl;
	cout << "The weight of it is: " << snack.weight << endl;
	cout << "The calory it has is: " << snack.calory << endl;
	
	return 0;
}