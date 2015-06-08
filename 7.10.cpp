//7.10

#include<iostream>
double add(double x, double y);
double subtraction(double x, double y);
double multiply(double x, double y);
double division(double x, double y);
double(*pf[4])(double, double) = { add, subtraction, multiply, division };
double calculate(double, double, double(*pa)(double, double));

int main()
{
	using namespace std;
	double x = 0, y = 0;
	char choose = 'y';
	while ((choose == 'y') || (choose == 'Y') )
	{
		cout << "Enter two numbers:\n";
		cin >> x >> y;
		cout << "x + y = " << calculate(x, y, pf[0]) << endl;
		cout << "x - y = " << calculate(x, y, pf[1]) << endl;
		cout << "x × y = " << calculate(x, y, pf[2]) << endl;
		cout << "x ÷ y = " << calculate(x, y, pf[3]) << endl;
		cout << "Do you want to try again(y/n): ";
		cin >> choose;
	}
	cout << "Done.\n";
	system("pause");
	return 0;
}

double add(double x, double y)
{
	return x + y;
}
double subtraction(double x, double y)
{
	return x - y;
}
double multiply(double x, double y)
{
	return x*y;
}
double division(double x, double y)
{
	return x / y;
}
double calculate(double x, double y, double(*pa)(double, double))
{
	return (*pa)(x, y);
}