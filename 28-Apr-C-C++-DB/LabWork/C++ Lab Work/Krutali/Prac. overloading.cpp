#include <iostream>
using namespace std;

class overloading{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
	public:
		int add(int a, int b, int c)
		{
			return a+b+c;
		}
};
int main()
{
	overloading *o = new overloading;
	cout<<o->add(12,34)<<endl;
	cout<<o->add(56,78,90);
	return 0;
}