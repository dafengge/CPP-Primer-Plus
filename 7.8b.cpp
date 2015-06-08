//7.8b

#include<iostream>
const int Seasons=4;
const char *Sname[Seasons]={"Spring","Summer","Fall","Winter"};
struct Expense{
    double expenses[Seasons];
};
void fill(Expense *pa);
void show(const Expense *da);

int main()
{
    Expenses year;
	fill(&year);
	show(&year);
	
	return 0;
}

void fill(Expense *pa)
{
    using namespace std;
	for(int i=0;i<Seasons;i++)
	{
	    cout<<"Enter "<<Sname[i]<<" expenses: ";
		cin>>pa->expenses[i];
	}
}

void show(const Expense *da)
{
    using namespace std;
	double total=0;
	cout<<"\nEXPENSES\n";
	for (int i=0;i<Seasons;i++)
	{
	    cout<<Sname[i]<<": $"<<da->expenses[i]<<endl;
		total+=da->expenses[i];
	}
	cout<<"Total Expenses: $"<<total<<endl;
}
