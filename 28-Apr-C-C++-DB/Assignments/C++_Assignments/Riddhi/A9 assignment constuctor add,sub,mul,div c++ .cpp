#include <iostream>
using namespace std;

class asmd
{
	public :
	int a ,b;
	double add ,sub ,mul,div ;
	 asmd()
	 {
	     cout<<"Enter A =";
	     cin>>a;
	     cout<<"Enter B =";
	     cin>>b;
	     add = a + b;
	     sub = a - b;
	     mul = a * b;
	     div =a/(float)b;
	 }
	 void display()
	 {
	 	cout<<"\nAddition is :"<<(a+b);
	 	cout<<"\nSubtraction is :"<<(a-b);
	 	cout<<"\nMultiplication is :"<<(a*b);
	 	cout<<"\nDivison is :"<<(a/(float)b);
	 }
};
int main()
{
	asmd a1;
	a1.display();
	return 0;
}