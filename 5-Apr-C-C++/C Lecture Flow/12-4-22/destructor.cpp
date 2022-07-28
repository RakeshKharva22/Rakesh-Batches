/*

Inheritance: using this we can access properties of one class to another class

=> provides code reusability

Types:

1. Single Inheritance

class a // parent / base / super class

||

class b // child // derived / sub class
Syntax:

child class : access-modifier parent class-name

we need to create object of a child class here.


2. Multiple Inheritance
3. Multilevel
4. Hierarchical
5. Hybrid

*/

#include<iostream>
using namespace std;
class A
{
	public:
		int a=12;
		
		void test()
		{
			cout<<"class A"<<endl;
		}
	
};

class B : public A
{
	public:
		int b=30;
		
		void test123()
		{
			cout<<"class B"<<endl;
		}
	
};


main()
{
	B obj;
	cout<<obj.b<<endl;
	obj.test123();
	cout<<obj.a<<endl;
	obj.test();
}
