//5.8

#include<iostream>
#include<cstring>

int main()
{
    using namespace std;
	char word[20];
	int num=0;
	cout<<"Enter words (to stop, type the word done): \n";
	cin>>word;
	while(strcmp(word,"done"))
	{
		num++;
		cin>>word;
	}
	cout<<"You entered a total of "<<num<<" words.\n";
	
	return 0;
}