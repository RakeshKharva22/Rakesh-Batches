#include <iostream>
using namespace std;

class Dipika 
{
	private :
		int money;
	friend class Riddhi;
	public :
		Dipika()
		{
			money = 10000;
		}
};

class Riddhi
{
	private :
		int money1 ;
	public :
		Riddhi()
		{
			money1 = 40000;
		}
		int give()
		{
			Dipika d;
			return d.money + money1;
		}
};
int main()
{
	Riddhi r;
	cout<<"money received "<<r.give();
	return 0;
}