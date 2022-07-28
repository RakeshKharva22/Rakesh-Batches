/*
Inheritance :- 

The child class object acquiring the properties of parent class is called inheritance.

simple & practical definition:  creating a new class from an existing class.

Parent Class -> Base Class & Super Class.
Child Class  -> Derived Class & Sub Class.

5 types of inheritance

1) Single-level inheritance
2) Multilevel inheritance
3) Multiple inheritance
4) Hierarchical inheritance
5) hybrid inheritance


// Object will always be created of derived class in inheritance.
*/


#include<iostream>
using namespace std;

// Base Class
class A : public B{          
	
	public:
		int a;
		
		void getA()
		{
			cout<<"Enter A : ";
			cin>>a;
		}
		
		void printA()
		{
			cout<<"A = "<<a;
		}
};

// Derived Class

class B : public A{
	
	public:
			int b;
		
			void getB()
			{
				cout<<"\nEnter B : ";
				cin>>b;
			}
			
			
			void printB()
			{
				cout<<", B = "<<b;
			}
};

int main()
{
	B y;
	y.getA();
	y.getB();
	y.printA();
	y.printB();
		
	
	return 0;
}

