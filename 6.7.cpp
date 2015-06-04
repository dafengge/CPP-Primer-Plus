//6.7

#include<iostream>
#include<string>
#include<cctype>
bool isvowel(char c);

int main()
{
	using namespace std;
	string ch;
	int vowel = 0, consonant = 0, other = 0;
	cout << "Enter words (q to quit):";
	cin >> ch;
	while (ch != "q")
	{
		if (isalpha(ch[0]))
		{
			if (isvowel(ch[0]))
				vowel++;
			else consonant++;
		}
		else other++;
		cin >> ch;
	}
	cout << vowel << " words beginning with vowels\n";
	cout << consonant << " words beginning with consonants\n";
	cout << other << " others\n";

	return 0;
}

bool isvowel(char c)
{
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
		c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
		c == 'u' || c == 'U')
		return true;
	else return false;
}