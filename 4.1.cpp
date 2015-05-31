//4.1

#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string fname, lname;
	char grad;
	int age = 0;

	cout << "What is your first name? ";
	getline(cin, fname);
	cout << "What is your last name? ";
	getline(cin, lname);
	cout << "What letter grade do you deserve? ";
	cin >> grad;
	grad += 1;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grad: " << grad << endl << "Age: " << age << endl;
	
	return 0;
}