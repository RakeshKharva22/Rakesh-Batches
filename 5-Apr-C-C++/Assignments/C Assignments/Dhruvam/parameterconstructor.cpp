#include<iostream>
using namespace std;
class arithmetic
{
	public:
			int a,b;
			arithmetic(int n1,int n2)
			{
				a=n1;
				b=n2;
			}
			void add()
			{
				cout<<"addition is "<<(a+b);
			}
			void sub()
			{
				cout<<"\nsubstraction is "<<(a-b);
			}
			void mul()
			{
				cout<<"\nmultiplication is "<<(a*b);
			}
			void div()
			{
				cout<<"\ndivision is "<<(a/b);
			}
};
int main()
{
	int a1,b1;
	cout<<"enter a = ";
	cin>>a1;
	cout<<"enter b = ";
	cin>>b1;
	arithmetic ar(a1,b1);
	ar.add();
	ar.sub();
	ar.mul();
	ar.div();
	
	return 0;
}