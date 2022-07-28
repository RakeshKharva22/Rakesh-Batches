/*
c++ provides 
*/



#include<iostream>
using namespace std;

int add(int a , int b)
{
	return a+b;
}

float add1(float a , float b)
{
	return a+b;
}

int main()
{
	cout<<"Sum = "<<add(10,20);
	cout<<"Sum = "<<add1(10.7f,20.2f);
	
	return 0;
}