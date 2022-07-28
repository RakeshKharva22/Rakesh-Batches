#include <iostream>
using namespace std;

class base
{
	public :
		virtual void display1();
		virtual void display4();
		
		void display2()
		{
			cout<<"\nnon pure virtual function from base ";
		}
};
class derived :public base
{
	public :
		void display1()
		{
			cout<<"\npure virtual function 1 implemented in derived class";
		}
		void display3()
		{
			cout<<"\nnon pure virtual function from derived";
		}
		void display4()
		{
			cout<<"\npure virtual function4 from derived";
		}
};
int main()
{
	derived d;
	d.display1();
	d.display2();
	d.display3();
	d.display4();
	
	return 0;
}