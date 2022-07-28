#include <iostream>
using namespace std;

class CRT
{
	public:
		
	int show(double r)
	{
		return (3.14 * r *r);
	}
	
	int show(int b ,int h)
	{
		return (b*h)/2;
	}
	
	int show(float l ,float w)
	{
		return (l*w);
	}
};
int main()
{
	CRT c;
	cout<<"--------------function overloading--------------";
	
	cout<<"\nArea of circle :"<<c.show(45);
	cout<<"\nArea of rectangle :"<<c.show(34,67);
	cout<<"\nArea of triangle :"<<c.show(87,67);
	return 0;
}