/*
C++ provides you the powerful concept to write the generic programs
called as TEMPLATE.

It provides you a single common function which is accessible by all the types.

template<typename T>

*/

#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
	return a+b;
}



int main()
{
	cout<<"Sum = "<<add<int>(10,20);
	cout<<"Sum = "<<add<float>(10.4f,20.3f);
	
	return 0;
}

