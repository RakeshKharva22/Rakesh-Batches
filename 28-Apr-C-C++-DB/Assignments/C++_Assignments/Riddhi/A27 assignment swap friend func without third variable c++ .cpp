#include <iostream>
using namespace std;

class Riddhi
{
	private :
		int a ,b;
		friend void swap(Riddhi);
	public :
		Riddhi()
		{
			a=20;
			b=40;
		}
};

void swap(Riddhi r1)
{
	cout<<"\nBefore swapping A ="<<r1.a<<"\nB ="<<r1.b;
	r1.a = r1.a + r1.b;
	r1.b = r1.a - r1.b;
	r1.a = r1.a - r1.b;
	cout<<"\nAfter swapping A ="<<r1.a<<"\nB ="<<r1.b;
}
int main()
{
	Riddhi r1;
	swap(r1);
	
	return 0;
}