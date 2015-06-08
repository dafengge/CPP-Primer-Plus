//7.7

#include<iostream>
const int Max = 5;
double * fill_array(double *ar, int limit);
void show_array(const double ar[], const double *end);
void revalue(double r, double ar[], double *end);

int main()
{
	using namespace std;
	double properties[Max];

	double *endpoint = fill_array(properties, Max);
	show_array(properties, endpoint);
	if (properties<endpoint)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input;Please enter a number: ";
		}
		revalue(factor, properties, endpoint);
		show_array(properties, endpoint);
	}
	cout << "Done.\n";

	system("pause");
	return 0;
}

double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i = 0;
	for (i = 0; i<limit; i++)
	{
		cout << "Enter value #" << i + 1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input;input process terminaed.\n";
			break;
		}
		else if (temp<0)
			break;
		ar[i] = temp;
	}
	return ar+i;
}

void show_array(const double *ar, const double *end)
{
	using namespace std;
	for (int i = 0; i<(end-ar); i++)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], double *end)
{
	for (int i = 0;i<(end-ar); i++)
		ar[i] *= r;
}