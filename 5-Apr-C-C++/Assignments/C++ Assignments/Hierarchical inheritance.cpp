#include<iostream>
using namespace std;

class G
{
	public:
		
		void displayG()
		{
			cout<<"Class G"<<endl;
		}
	
};

class B : public G
{
	public:
		
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
	
};

class E : public G
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

class D : public E
{
	public:
		void displayD()
		{
			cout<<"Class D"<<endl;
		}
};

class F : public E
{
	public:
		void displayF()
		{
			cout<<"Class F"<<endl;
		}
};

main()
{
	A obj;
	obj.displayG();
	obj.displayB();
	obj.displayA();
	C obj1;
	obj1.displayG();
	obj1.displayB();
	obj1.displayC();
	D obj2;
	obj2.displayG();
	obj2.displayE();
	obj2.displayD();
	F obj3;
	obj3.displayG();
	obj3.displayE();
	obj3.displayF();

}
