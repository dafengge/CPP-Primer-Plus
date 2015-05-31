//4.9

#include<iostream>

struct CandyBar{
	char brand[20];     //糖品牌名
	float weight;     //重量
	int calory;       //卡路里
};

int main()
{
	using namespace std;
	CandyBar *snack = new CandyBar [3];
	snack[0] = { "Mocha Munch", 2.3, 350 };
	snack[1] = { "Big White Rabbit", 2.5, 250 };
	snack[2] = { "Fu Shi", 2, 23333 } ;

	cout << "The first brand of the candy is: " << snack[0].brand << endl;
	cout << "And the weight of it is: " << snack[0].weight << endl;
	cout << "And the calory it has is: " << snack[0].calory << endl << endl;
	cout << "The second brand of the candy is: " << snack[1].brand << endl;
	cout << "And the weight of it is: " << snack[1].weight << endl;
	cout << "And the calory it has is: " << snack[1].calory << endl << endl;
	cout << "The third brand of the candy is: " << snack[2].brand << endl;
	cout << "And the weight of it is: " << snack[2].weight << endl;
	cout << "And the calory it has is: " << snack[2].calory << endl;

	delete [] snack;
	return 0;
}