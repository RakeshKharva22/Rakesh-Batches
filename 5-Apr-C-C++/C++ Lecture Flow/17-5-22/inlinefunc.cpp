#include <iostream>
using namespace std;

inline int mul(int a, int b)
{
	cout<<"A = "<<a<<", B = "<<b<<" is ";
	return a * b;
}

inline void callbyvalue(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	 cout<<"\n Swap in Function A = "<<a<<", B = "<<b;
}

inline void callbyreference(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	 cout<<"\n Swap in Function A = "<<a<<", B = "<<b;
}


int main()
{
	int a,b,ch;
	cout<<"1.Mul\n2.Call By Value.\n3.Call By Reference.";
	cout<<"\n\nPlease Enter choice ? ";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter A & B ";
				cin>>a>>b;	
				cout<<"\nMultiplication is "<<mul(a,b);
				break;
				
		case 2:cout<<"Enter A & B ";
			   cin>>a>>b;
			   cout<<"\nBefore Swap A = "<<a<<", B = "<<b;
			   callbyvalue(a,b);
			   cout<<"\nAfter Swap A = "<<a<<", B = "<<b;
			   break;
			   
		case 3:cout<<"Enter A & B ";
			   cin>>a>>b;
			   cout<<"\nBefore Swap A = "<<a<<", B = "<<b;
			   callbyreference(&a,&b);
			   cout<<"\nAfter Swap A = "<<a<<", B = "<<b;
			   break;
		default : cout<<"Invalid Input";
				break;
	}
	
	
	return 0;
}


