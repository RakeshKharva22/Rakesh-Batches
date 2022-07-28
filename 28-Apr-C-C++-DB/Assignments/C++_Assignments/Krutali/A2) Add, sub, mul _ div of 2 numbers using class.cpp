#include <iostream>
using namespace std;

class K{
	public:
		int a, b, add, sub, mul;
		float div;
		
		void accept()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			cout<<"\nA = "<<a<<"\tB = "<<b;
		}
		void addition()
		{
			add = a+b;
			cout<<"\n\nAddition is : "<<add<<endl;
		}
		void subtraction()
		{
			sub = a-b;
			cout<<"Subtraction is : "<<sub<<endl;
		}
		void multiplication()
		{
			mul = a*b;
			cout<<"Multiplication is : "<<mul<<endl;
		}
		void division()
		{
			div = a/(float)b;
			cout<<"Division is : "<<div<<endl;
		}
};
int main()
{
	K k;
	k.accept();
	k.addition();
	k.subtraction();
	k.multiplication();
	k.division();
}