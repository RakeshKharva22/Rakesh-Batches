

#include<iostream>
using namespace std;

// Base Class
class A{          
	
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

class  C : public B{

		public:
			int c;
		
			void getc()
			{
				cout<<"\nEnter C : ";
				cin>>c;
			}
			
			
			void printC()
			{
				cout<<", C = "<<c;
			}
	
};

int main()
{
	C z;
	z.getA();
	z.getB();
	z.getc();
	
	z.printA();
	z.printB();
	z.printC();
		
	
	return 0;
}

