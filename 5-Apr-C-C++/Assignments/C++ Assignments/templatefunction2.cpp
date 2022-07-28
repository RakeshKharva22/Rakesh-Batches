#include<iostream>
using namespace std;
 template<typename T>




T add(T a , T b)
{
	return a+b;
}


int main()
{
	cout<<"Sum = "<<add<int>(10,20);
	cout<<"Sum = "<<add<float>(10.7f,20.2f);
	
	return 0;
}