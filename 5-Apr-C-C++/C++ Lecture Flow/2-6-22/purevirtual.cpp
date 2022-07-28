#include<iostream>

using namespace std;

class Base{
	public:
		virtual void display1();  // Pure virtual function
		virtual void display2();  // Pure virtual function
		
		void display3()
		{
			cout<<"\nDisplay3 method from Base"<<endl;
		}
		
		
};

class Derived : public Base{
	public:
		
		void display1()
		{
			cout<<"\nDisplay1 method implemented in Derived"<<endl;
		}
		
		void display2()
		{
			cout<<"\nDisplay2 method implemented in Derived"<<endl;
		}
		
		void diplay4()
		{
			cout<<"\nDisplay4 method from Derived"<<endl;
		}
};


int main()
{
	Derived d;
	d.display1();
	d.display2();
	d.display3();
	d.diplay4();

	return 0;
}