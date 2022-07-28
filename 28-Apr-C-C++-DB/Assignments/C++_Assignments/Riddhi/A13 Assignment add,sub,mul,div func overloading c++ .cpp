#include <iostream>
using namespace std;

class ASMD
{
     public:
	  
	  void display(int a ,int b ,int c ,int d)
	  {
	       	cout<<"Addition is :"<<a+b+c+d<<endl;
	  }	
	  
	  void display(double i , double j,double k)
	  {
	  	    cout<<"Subtraction is :"<<i-j-k<<endl;
	  }
	  
	  void display(long double o ,long double p,long double q,long double r,long double s)
	  {
	  	    cout<<"Multiplication is :"<<o*p*q*r*s<<endl;
	  }
	  
	  void display(float g ,float k)
	  {
	  	    cout<<"Division is :"<<g/(float)k;
	  }
};
int main()
{
	ASMD a;
	a.display(23,56,45,98);
	a.display(45,68,34);
	a.display(90,67,23,12,24);
	a.display(32,87);
	return 0;
}