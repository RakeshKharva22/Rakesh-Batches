#include <iostream>
using namespace std;


class addsubmul
{
	private:
		int add , sub ,mul, a, b ,choice ;
	public :
		addsubmul(int a ,int b)
		{
			add = a + b;
			sub = a - b;
			mul = a * b;
		}
		
		addsubmul operator -()
		{
			add = - a + b;
			sub = -a - b;
			mul = -a * b;
			return addsubmul (a ,b);
		}
		void display()
		{
			cout<<"Enter A :";
			cin>>a;
			cout<<"Enter B :";
			cin>>b;
			cout<<"please enter your choice ?";\
			cin>>choice;
		}
		
		switch (choice)
		{
		  case :cout<<"Addition is :"<<(a+b)<<endl;
		        break;
		  case :cout<<"Subtraction is :"<<(a-b)<<endl;
		        break;
		  case :cout<<"Multiplication is :"<<(a*b);
		        break;
		  case :cout<<"Invalid choice ";
		        break;
		  	
		}
};
int main()
{
	addsubmul a1(45,34);
	-a1;
	a1.display();
	return 0;
}