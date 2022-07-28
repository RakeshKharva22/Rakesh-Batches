/*
OOP => Object Oriented Programming

1. Class and Object
2. Encapsulation
3. Polymorphism
4. Inheritance
5. Abstraction

Class: blueprint of an object => logical entity

object: it has a state and a behaviour => physical entity


class class-name
{
	access-modifiers: // public,private,protected
	
	variables; // data-members
	
	functions; // member-functions

};

main()

{
	class-name obj; // object creation
}


*/


#include<iostream>
using namespace std;

class xyz
{
	private: // public,private,protected
	
	int a; // data-members
	
	int fun()  // member-functions
	{
		cout<<"CLASS AND OBJECT..";
	}
	

};

main()

{
	xyz obj; // object creation
	
	cin>>obj.a;12
	cout<<obj.a<<endl;
	
	obj.fun();
}













