/*

OOP :- Object Oriented Programming

provides 4 most important features.

1) Inheritance
2) Encapsulation
3) Abstraction
4) Polymorphism

Access modifiers :  public,private,protected

Class : It is a Collection of Data members and Data Functions.

Object : It is an real world entity.

*/



#include <iostream>
using namespace std;

class Student{
	
	public:
			int age;           // Data Members.
			string name;
	
			void accept()					// Member Functions.
			{
				cout<<"Enter Age : ";
				cin>>age;
				cout<<"Enter Name : ";
				cin>>name;
			}
			
			void show()
			{
				cout<<"Age = "<<age<<endl;
				cout<<"Name = "<<name<<endl;
			}
};


int main()
{
	Student s1;					// Object Creation.	
	s1.accept();
	s1.show();
	
}
