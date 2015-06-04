//6.6

#include<iostream>
#include<string>
struct ProtLog{
	std::string name;
	double contribute;
};

int main()
{
	using namespace std;
	cout << "Enter the number of patrons: ";
	int patrons;
	cin >> patrons;
	cin.get();
	ProtLog * ctb = new ProtLog[patrons];
	int count = 0, *gpn = new int[patrons];
	cout << "Please enter the patrons' name ande their patronage:\n";
	for (int i = 0; i<patrons; i++)
	{
		cout << "#" << i + 1 << ": name: ";
		getline(cin, ctb[i].name);
		cout << "patronage: ";
		cin >> ctb[i].contribute;
		cin.get();
		if (ctb[i].contribute>10000)
		{
			gpn[count] = i;
			++count;
		}
	}

	cout << endl;
	cout << "There are grand patrons:\n";
	if (count == 0)
		cout << "none\n";
	else {
		for (int i = 0; i<count; i++)
		{
			cout << "Patron: " << ctb[gpn[i]].name << endl;
			cout << "Money: " << ctb[gpn[i]].contribute << endl;
		}
	}
	cout << endl;
	cout << "There are another patrons:\n";
	if (count == patrons)
		cout << "none\n";
	else {
		for (int i = 0; i<patrons; i++)
		{
			int j = 0;
			for (j = 0; j<count; j++)
				if (i == gpn[j]) break;
			if (j == count)
			{
				cout << "Patron: " << ctb[i].name << endl;
				cout << "Money: " << ctb[i].contribute << endl;
			}
		}
	}

	return 0;
}