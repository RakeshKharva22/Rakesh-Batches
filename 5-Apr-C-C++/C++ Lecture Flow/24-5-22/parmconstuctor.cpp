#include <iostream>

using namespace std;

class Arithmetic{
	
		public:
				int a,b;
				
				Arithmetic(int n1, int n2)
				{
					a = n1;
					b = n2;
				}
				
				
				
				void add()
				{
					cout<<"Addition is "<<(a+b);
				}
				
				void sub()
				{
					cout<<"\nnSubtraction is "<<(a-b);
				}
				
			
};


int main()
{
	int a1,b1;
	cout<<"Enter A = ";
	cin>>a1;
	cout<<"Enter B = ";
	cin>>b1;
	Arithmetic ar(a1,b1);
	ar.add();
	ar.sub();
	
	return 0;
}