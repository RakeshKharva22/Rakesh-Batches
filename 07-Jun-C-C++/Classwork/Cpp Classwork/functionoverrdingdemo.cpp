#include<iostream>
using namespace std;

class A{
	public:
		void show()
		{
			cout<<"\nShow Method from Class A"<<endl;
		}
};

class B : public A{
	public:
		void show()
		{
			cout<<"\nShow Method from Class B"<<endl;
		}
};

int main()
{
//	B b;
//	b.show();
	
	B *b = new B;  // B b;
	b->show(); //b.show();
	

	return 0;	
}