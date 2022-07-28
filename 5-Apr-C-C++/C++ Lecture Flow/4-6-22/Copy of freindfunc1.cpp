#include<iostream>
using namespace std;

class Dhruvam{
	private:
		int money;
	
	friend int Rakesh(Dhruvam);
	public :	
		
		Dhruvam()
		{
			money = 1000;
		}
};

//accessing private member of class.
int Rakesh(Dhruvam d)
{
	d.money += 5000;
	return d.money;
}

int main()
{
	Dhruvam d;
	cout<<"Money provided by my Friend is "<<Rakesh(d);
}