#include <iostream>
using namespace std;

class A{
	private:
		int numA;
		//declaration of friend class
		friend class B;
	public:
		A()	
		{
			numA = 10;
		}
		
		
	};

class B{
	private:
		int numB;
	public:
		B()
		{
			numB = 30;
		}
		int add()
		{
			A a;
			return a.numA + numB;
		}
};


int main()
{
	B b;
	cout<<"Sum = "<<b.add();
}
