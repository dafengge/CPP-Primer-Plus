//6.4

#include<iostream>
const int starsize = 20;
const int Num = 5;
struct bop{
	char fullname[starsize];
	char title[starsize];
	char bopname[starsize];
	int preference;
};

int main()
{
	using namespace std;
	cout << "Benevolent Oreder of Programmers Report\n"
		<< "a. display by name     b. display by title\n"
		<< "c. display by bopname  d. display by preference\n"
		<< "q: quit\n";
	cout << "Enter your choice: ";
	bop boper[Num] = { { "Wimp Macho", "Programmer1", "WMMM", 0 },
	               { "Raki Rhodes", "Junior Programmer", "JPPP", 1 },
	               { "Celia Laiter", "Programmer2", "MIPS", 2 },
	               { "Hoppy Hipman", "Analyst Trainee", "HHHH", 1 },
	               { "Pat Hand", "Programmer3", "LOOPY", 2 } };
	char ch;
	cin >> ch;
	while (ch !=  'q')
	{
		for (int i = 0; i<Num; i++)
		{
			switch (ch)
			{
			case 'a':cout << boper[i].fullname << endl; break;
			case 'b':cout << boper[i].title << endl; break;
			case 'c':cout << boper[i].bopname << endl; break;
			case 'd':{if (boper[i].preference==0)
				          cout << boper[i].fullname << endl;
				      else if (boper[i].preference==1)
					      cout << boper[i].title << endl;
					  else if (boper[i].preference == 2)
						  cout << boper[i].bopname << endl;
					 }
			}
		}
		cout << "Next choice:";
		cin >> ch;
	}
	cout << "Bye\n";

	return 0;
}