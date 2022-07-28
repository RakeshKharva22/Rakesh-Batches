#include <iostream>
using namespace std;

class A
{
	public :
		int a =10;
		void sqr()
		{
			cout<<"\nsquare is:"<<(a*a);
		}
};
class B :virtual public A
{
	public :
		
};
class C :virtual public A
{
	public :
		
};
class D :public B ,public C
{
	public :
		
};
int main()
{
	D d1;
	d1.sqr();
	return 0;
}