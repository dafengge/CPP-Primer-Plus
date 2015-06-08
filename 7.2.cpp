//7.2

#include<iostream>
int input_score(double a[], int n);       //输入分数
void output_score(const double a[], int n);      //显示分数
double aver_score(const double a[], int n);      //计算平均数
const int Num = 10;

int main()
{
	using namespace std;
	double score[Num] = {};
	int num = 0;
	num = input_score(score, Num);
	output_score(score, num);

	double aver = aver_score(score, num);
	cout << "The average score is: " << aver << endl;

	return 0;
}

int input_score(double a[], int n)
{
	using namespace std;
	cout << "Enter the scores:\n";
	double temp = 0;
	int i = 0;
	for (i = 0; i<n; i++)
	{
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			break;
		}
		else if (temp<0)
			break;
		a[i] = temp;
	}

	return i;
}

void output_score(const double a[], int n)
{
	using namespace std;
	cout << "The socres are:\n";
	for (int i = 0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

double aver_score(const double a[], int n)
{
	double sum = 0;
	for (int i = 0; i<n; i++)
		sum += a[i];

	return sum / n;
}