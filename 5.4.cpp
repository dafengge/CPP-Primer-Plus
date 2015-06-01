//5.4

#include<iostream>
const float Daphne=0.1;      //Daphne的利率为10%
const float Cleo=0.05;       //Cleo的利率为5%

int main()
{
    using namespace std;
	double Dap=100,Cl=100;    //Daphne和Cleo的投资价值
	int count=0;
	while(Cl<=Dap)
	{
	    count++;
		Dap=Dap+100*Daphne;
		Cl=Cl+Cl*Cleo;
	}
	cout<<count<<"年后，Cleo的投资价值才超过Daphne的投资价值。\n";
	cout<<"Daphne投资价值有："<<Dap<<endl;
	cout<<"Cleo投资价值有："<<Cl<<endl;
	
	return 0;
}