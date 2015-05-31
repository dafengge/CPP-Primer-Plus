//4.4

#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string fname;
	string lname;
	string name;    //保存名、姓和总姓名

	cout << "Enter your first name: ";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin,lname);
	name = lname + ", " + fname;
	cout << "Here's the information in a single string: " << name << endl;

	return 0;
}