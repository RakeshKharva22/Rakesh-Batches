#include<iostream>
using namespace std;

class A{
	public:
		int a = 20;
		
};

class B: public A{
	public:
		int b = 60;
};

class C : public B{
	public:
		int c = 30;
		
};


int main()
{

	C v;
	cout<<"\nA = "<<v.a;
	cout<<"\nB = "<<v.b;
	cout<<"\nC = "<<v.c;
	
	
	
	
	return 0;
}


