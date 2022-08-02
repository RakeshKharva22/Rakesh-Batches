/*
Polymorphism:
				Poly -> Many
				morphism -> Form
				
				(Many+Form) -> Polymorphism

		1) RunTime Polymorphism  ( overriding)
		2)Compile Time Polymorphism	 (overloading)	
	
	Overloading : 1) Function Overloading : 
											Same function name, but different Parameters
				
				2) Operator Overloading : 
				  
*/


#include<iostream>
using namespace std;

class MethodOverloadingDemo{
	public:
		int add()
		{
			return 5;
		}
		int add(int a)
		{
			return a;
		}
		
//		int add(int a, int b)
//		{
//			return a+b;
//		}
		
		float add(float a, float b)
		{
			return a+b;
		}
		
		int add(int a, int b,int c)
		{
			return a+b+c;
		}
};

int main()
{
	MethodOverloadingDemo md;
	cout<<"A = "<<md.add();
	cout<<"\nAdd : "<<md.add(10,20,2);
	cout<<"\nAdd : "<<md.add(5.6f,54.6f);
	
	return 0;	
}



