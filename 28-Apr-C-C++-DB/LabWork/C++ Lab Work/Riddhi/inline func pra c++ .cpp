#include <iostream>
using namespace std;


inline int add(int a, int b)
{
	return a + b;
}

inline int sub(int a, int b)
{
	return a - b;
}

inline int mul(int a,int b)
{
	return a*b;
}

inline float div(float a,float  b)
{
	return a/(float)b;
}
int main()
{
	 int a=10 ,b =20;
	 float div;
	 div =a/(float)b;
	 cout<<"addition is :";
	 cout<<add(a,b);
	 cout<<"\nsubtraction is :";
	 cout<<sub(a,b);
	 cout<<"\nmultiplication is :";
	 cout<<mul(a,b);
	 cout<<"\ndivision is :";
	 cout<<div;
	 
}