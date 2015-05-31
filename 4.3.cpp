//4.3

#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	const int Num = 20;
	char fname[Num], lname[Num];   //保存名（fname）和姓(lname)
	char name[2 * Num];            //保存总名称

	cout << "Enter your first name: ";
	cin.getline(fname, Num);
	cout << "Enter your last name: ";
	cin.getline(lname, Num);
	strcpy_s(name, lname);
	strcat_s(name, ", ");
	strcat_s(name, fname);
	cout << "Here's the information in a single string: " << name << endl;

	return 0;
}