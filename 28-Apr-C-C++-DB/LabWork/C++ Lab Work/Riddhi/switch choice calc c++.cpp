#include <iostream>
using namespace std;

int main()
{
	int a ,b ,choice;
	cout<<"\n-----------choice calculator----------";
	cout<<"\nEnter  = A :";
	cin>>a;
	cout<<"\nEnter  = B :";
	cin>>b;
	
	cout<<"\n-----------calc menu------------";
	cout<<"\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division";
	cout<<"\nplease enter your choice ?";
	cin>>choice;
	
	switch (choice)
	{
		case 1: cout<<"\n Addition ="<<(a+b);
		       break;
		case 2: cout<<"\n Subtraction ="<<(a-b);
		       break;
		case 3:cout<<"\n Multiplication ="<<(a*b);
		       break;
		case 4:cout<<"\n Division ="<<(a/(float)b);
		       break;
	    default:cout<<"\n Invalid choice";
	            break;
	    
	}
	return 0;
}