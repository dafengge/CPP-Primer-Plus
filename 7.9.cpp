//7.9

#include<iostream>
using namespace std;
const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void dispaly1(student st);
void dispaly2(const student *ps);
void dispaly3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i<entered; i++)
	{
		dispaly1(ptr_stu[i]);
		dispaly2(&ptr_stu[i]);
	}
	dispaly3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done.\n";
	
	system("pause");
	return 0;
}

int getinfo(student pa[], int n)
{
	int temp = 0, i = 0;
	for (i = 0; i<n; i++)
	{
		cout << "Enter the student's name: ";
		cin.getline(pa[i].fullname, SLEN);
		if (strlen(pa[i].fullname) == 0)
			break;
		cout << "The student's hobby is: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "The student's ooplevel is: ";
		cin >> pa[i].ooplevel;
		cin.get();
	}
	return i;
}
void dispaly1(student st)
{
	cout << "Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;
}
void dispaly2(const student *ps)
{
	cout << "Name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl;
}
void dispaly3(const student pa[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "Name: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Ooplevel: " << pa[i].ooplevel << endl;
	}
}