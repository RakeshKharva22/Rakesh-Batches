#include<iostream>
using namespace std;

class Base{
      public:
	    virtual void show()
		{
			cout<<"\nShow method from base class"<<endl;
			}	
};

class Derived : public Base{
	public:
		void show()
		{
			cout<<"\nshow method from Derived class"<<endl;
		}
};

int main() 
{
	Base *b1 = new Derived;
	b1->show(); 
	return 0;
}