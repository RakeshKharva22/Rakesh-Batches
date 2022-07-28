#include<iostream>
using namespace std;
void func2();   // Function Declaration
void func1();

int main()
{
	func2();	//Function Calling
	func1();

	return 0;	
}

void func1() 				// Function Creation
{
	cout<<"Function 1 Called";
}

void func2()
{
	cout<<"Function 2 Called";
}
