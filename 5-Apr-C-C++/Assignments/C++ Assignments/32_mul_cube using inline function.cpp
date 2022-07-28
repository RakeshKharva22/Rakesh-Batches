#include<iostream>
using namespace std;

float mul(float, float);
float cube_a(float);
float cube_b(float);

int main()
{
	float a,b, mult=0, cube=0;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter Second number: ";
	cin>>b;
	mult=mul(a,b);
	cout<<endl<<a<<"*"<<b<<" = "<<mult;
	cube=cube_a(a);
	cout<<endl<<a<<"*"<<a<<"*"<<a<<"="<<cube;
	cube=cube_b(b);
	cout<<endl<<b<<"*"<<b<<"*"<<b<<"="<<cube;
	return 0;
}

inline float mul(float a, float b)
{
	return(a*b);
}

inline float cube_a(float a)
{
	return(a*a*a);
}

inline float cube_b(float b)
{
	return(b*b*b);
}