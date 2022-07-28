#include <iostream>
using namespace std;

class overloading 
{
	public :
		int add(int a ,int b)
		{
			return a + b;
		}
		int add(int a, int b, int c)
		{
			return a + b + c;
			
		}
};
int main()
{
	overloading o;
	cout<<o.add(45,78);
	
	overloading o1;
	cout<<o1.add(67,89,65);
	
	overloading *o2 =new overloading;
	cout<<o2->add(45,67,54);
	return 0;
}