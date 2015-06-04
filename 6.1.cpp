//6.1

#include<iostream>
#include<cctype>

int main()
{
	using namespace std;
	cout << "Enter please:\n";
	char ch;

	cin.get(ch);
	while (ch != '@')
	{
		if (isdigit(ch))
		{
			cin.get(ch);
			continue;
		}
		else if (islower(ch))
			ch = toupper(ch);
		else if (isupper(ch))
			ch=tolower(ch);
	    cout << ch;
		cin.get(ch);
	}
	cout << endl;
	return 0;
}