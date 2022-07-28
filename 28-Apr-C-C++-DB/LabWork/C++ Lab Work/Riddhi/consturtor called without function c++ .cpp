#include <iostream>
using namespace std;

class riddhi
{
   public :
     int a ,b;
	 riddhi()
	 {
	 	cout<<"\ndefault consturctor called.";
	 	a=10;
	 	b=20;
	 	cout<<"\nA "<<a<<"\nB "<<b<<endl;
	 }	
	 
	 riddhi(int a ,int b)
	 {
	 	cout<<"\nparameterized consturctor called.";
	 	this->a=a;
	    this->b=b;
	    cout<<"\nA "<<a<<"\nB "<<b<<endl;
	 }
	 
	 riddhi(const riddhi&c1)
	 {
	 	cout<<"\ncopy consturctor called.";
	 	this->a=c1.a;
	 	this->b=c1.b;
	 	cout<<"\nA "<<a<<"\nB "<<b<<endl;
	 }
};
int main()
{
	riddhi r1;

	riddhi r2(30,40);
	
	riddhi r3(r2);
		
	return 0;
}