//6.3

#include<iostream>

int main()
{
    using namespace std;
	
	cout<<"Please enter one of the following choices: \n"
	    <<"c) carnivore      p) pianist\n"
		<<"t) tree           g) game\n";
	char ch;
    cin>>ch;
	while (!(ch=='c'||ch=='p'||ch=='t'||ch=='g'))
	{
	    cout<<"Please enter a a, p, t, or g: ";
		cin>>ch;
	}
    switch(ch)
    {
	    case 'c' :cout<<"A maple is a carnivore.\n"; break;
		case 'p' :cout<<"A maple is a pianist\n.\n"; break;
		case 't' :cout<<"A maple is a tree.\n"; break;
		case 'g' :cout<<"A maple is a game\n.\n"; break;
	}	
	
	return 0;
}