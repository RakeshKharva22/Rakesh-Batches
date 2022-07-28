#include<iostream>
using namespace std;

class A {
	
	public:
		int a;    // data member

		void accept()   // member function
		{
			cout<<"Enter A : ";
			cin>>a;
		//	cout<<"A = "<<a;
		}
		
		void show()
		{
			cout<<"A = "<<a;
		}
		
		public:
		int b;    // data member

		void accept1()   // member function
		{
			cout<<"Enter B : ";
			cin>>b;
		//	cout<<"A = "<<a;
		}
		
		void show1()
		{
			cout<<"B = "<<b;
		}
};

int main() {
	A a1,a2;
	a1.accept1();
	a1.show1();
	a2.accept();
	a2.show();
	return 0;
}