#include<iostream>
using namespace std;

class A 
{
	public:
		
		int a,b;
		
		void getA()
		{
			cout<<"Enter the value of a: ";
			cin>>a;
			cout<<a<<endl;
		}
		
		
};

class B:public A
{
	public:
	
		void getA()
		{
			cout<<"Enter the value of b: ";
			cin>>b;
			cout<<b<<endl;
		}
	
};

main()
{

	B ob;

	ob.A::getA();
	ob.getA();
}