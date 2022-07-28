#include<iostream>

using namespace std;

class base{
	public:
		int a;
		void getA()
		{
			cout<<"Enter A : ";
			cin>>a;
		}
		
		void showA()
		{
			cout<<"A = "<<a;
		}
};

class derived :public base{
	public:
		int b;
		
		void getB()
		{
			cout<<"\nEnter B : ";
			cin>>b;
		}
		
		void showB()
		{
			cout<<"B = "<<b;
		}
};

class derived1 :public derived{
	public:
		public:
		int c;
		
		void getC()
		{
			cout<<"\nEnter C : ";
			cin>>c;
		}
		
		void showC()
		{
			cout<<"C = "<<c;
		}
};

int main()
{
	derived1 d1;
	d1.getA();
	d1.showA();
	d1.getB();
	d1.showB();
		
	
	return 0;
}