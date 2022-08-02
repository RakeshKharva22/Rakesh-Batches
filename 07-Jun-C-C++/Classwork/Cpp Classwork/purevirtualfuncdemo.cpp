#include<iostream>
using namespace std;

class A{
	public:
			
		void show1()     // Not a pure virtual function
		{
			cout<<"\nNon-Virtual Show method from A";
		}
		
		virtual void show2(); // Pure Virtual Function or abstract function
};


class B: public A{
	public:
		void show2()
		{
			cout<<"\nImplemented Show Method from Class A";
		}
		
		virtual void show3();	
		
};

class C : public B{
	public:
		void show3()
		{
			cout<<"\nImplemented Show Method from Class B";
		}
};

int main()
{
	C c;
	c.show1();
	c.show2();
	c.show3();
	return 0;
}