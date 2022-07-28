#include <iostream>
using namespace std;

class Krutali{
	private:
	    int money;
	friend class Riddhi;
	public:	 
	    Krutali()
	    {
	    	money = 10000;
		}
};

class Riddhi{
	private:
		int money1;
	public:
		Riddhi()
		{
			money1 = 40000;
		}
		int give()
		{
			Krutali k;
			return k.money + money1;
		}
};
int main()
{
	Riddhi r;
	cout<<"Money received : "<<r.give();
	return 0;
}