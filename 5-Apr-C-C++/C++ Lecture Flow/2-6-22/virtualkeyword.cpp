#include <iostream>
using namespace std;

class Base{
	public:
		virtual void show()
		{
			cout<<"\nShow Method from Base Class"<<endl;
		}
};

class Derived : public Base{
	public:
		void show()
		{
			cout<<"\nShow Method from Derived Class"<<endl;
		}
};


int main()
{
Base *b1 = new Derived;
b1->show();
	return 0;
}