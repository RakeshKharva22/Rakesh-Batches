#include <iostream>
using namespace std;

class Gayatri
{
	private :
		int money ;
		
	friend class Riddhi;
	public :
	Gayatri ()
	{
		money = 40000;
	}
};

class Riddhi
{
	private :
		int money1;
	public :
	Riddhi()
	{
	     money1 = 50000;	
	}
	
	int give()
	{
		Gayatri g;
		return g.money + money1;
	}
};
int main()
{
	Riddhi r;
	cout<<"money received "<<r.give();
	return 0;
}