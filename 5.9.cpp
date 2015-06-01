//5.9

#include<iostream>
#include<string>

int main()
{
    using namespace std;
	string word;
	int num=0;
	cout<<"Enter words (to stop, type the word done): \n";
	cin>>word;
	while(word!="done")
	{
		num++;
		cin>>word;
	}
	cout<<"You entered a total of "<<num<<" words.\n";
	
	return 0;
}