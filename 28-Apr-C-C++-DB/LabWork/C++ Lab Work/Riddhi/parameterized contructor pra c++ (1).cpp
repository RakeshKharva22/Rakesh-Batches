#include <iostream>
using namespace std;

class box
{
	public:
	double width,height,depth;
	box(double w, double h, double d)
	{
		cout<<"parameterized contructor called"<<endl;
		width = w;
		height = h;
		depth = d;
	}
	
	void volume()
	{
		cout<<"\n volume is"<<(width*height*depth);
	}
};
int main()
{
	box a2(12,32,5);
	a2.volume();
	return 0;
}