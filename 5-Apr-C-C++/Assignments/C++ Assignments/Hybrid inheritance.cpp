#include<iostream>
using namespace std;

class F
{
	public:
		
		void displayF()
		{
			cout<<"Class F"<<endl;
		}
	
};

class G
{
	public:
		
		void displayG()
		{
			cout<<"Class G"<<endl;
		}
	
};

class B : public F
{
	public:
		
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
	
};

class E :public F,public G
{
	public:
		
		void displayE()
		{
			cout<<"Class E"<<endl;
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

class C : public B
{
	public:
		
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
	
};

main()
{
	A obj;
	obj.displayF();
	obj.displayB();
	obj.displayA();
	C obj1;
	obj1.displayF();
	obj1.displayB();
	obj1.displayC();
	E obj2;
	obj2.displayF();
	obj2.displayG();
	obj2.displayE();
	
}
