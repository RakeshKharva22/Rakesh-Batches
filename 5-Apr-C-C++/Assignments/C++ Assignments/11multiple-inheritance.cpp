#include<iostream>
using namespace std;

class A
{
	public:
		
		void displayA()
		{
			cout<<"Class A.."<<endl;
		}
	
};

class B
{
	public:
		
		void displayB()
		{
			cout<<"Class B.."<<endl;
		}
	
};

class C :public A,public B
{
	public:
		
		void displayC()
		{
			cout<<"Class C.."<<endl;
		}
	
};

main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	
}
