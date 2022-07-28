#include <iostream>
using namespace std;

class Riddhi
{
	private :
		
		int money =0;
	friend int Gayatri(Riddhi r1);
	
};

int Gayatri(Riddhi r1)
{
	r1.money +=  200000;
	return r1.money;
}
int main()
{
	Riddhi r1;
	cout<<"money received "<<Gayatri(r1);
	return 0;
}