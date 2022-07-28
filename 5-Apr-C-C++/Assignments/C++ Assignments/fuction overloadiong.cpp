#include<iostream>
using namespace std;

class complex{
	
	int a , b;
	
	   public:
	   	void getvalue()
	   	{
	   		cout<<"Enter the complex value A & B :";
	   		cin>>a>>b;
		   }
		   complex operator+(complex co)
{
	complex t;
	t.a=a+co.a;
	t.b= b+co.b;
	return(t);
}