//4.8

#include<iostream>
#include<string>
struct WWPisa{                    //William Wingate的披萨信息
	std::string name;             //披萨公司名称
	float zhijing;                //披萨直径
	float zhongl;                 //披萨重量
};

int main()
{
	using namespace std;
	WWPisa *pisa1 = new WWPisa;
	cout << "Enter the diameter of the pisa: ";
	cin >> pisa1->zhijing;
	cin.get();
	cout << "Enter the company name: ";
	getline(cin, pisa1->name);
	cout << "Enter the weight of the pisa: ";
	cin >> pisa1->zhongl;
	cout << endl;

	cout << "The company of the pisa is: " << pisa1->name << endl;
	cout << "The diameter of it is: " << pisa1->zhijing << endl;
	cout << "The weight of it is: " << pisa1->zhongl << endl;

	delete pisa1;
	return 0;
}