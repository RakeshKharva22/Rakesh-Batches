#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
};

class B: public A{
	public:
		int b;
};


int main()
{

	
	B c;
	c.a = 10;	
	c.b = 20;
	cout<<"\nA = "<<c.a;
	cout<<"\nB = "<<c.b;
	
	return 0;
}


