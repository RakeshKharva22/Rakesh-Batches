#include<iostream>
using namespace std;

class C
{
	public:
		
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
	
};

class B : public C
{
	public:
		
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
	
};

class A : public B
{
	public:
		
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
	
};

main()
{
	A obj;
	obj.displayC();
	obj.displayB();
	obj.displayA();
	
}
