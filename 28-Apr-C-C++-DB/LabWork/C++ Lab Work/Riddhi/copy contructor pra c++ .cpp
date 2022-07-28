#include <iostream>
using namespace std;

class box
{
    public:
	double width,height,depth;
	box()
	{
	   cout<<"\n default contructor called."<<endl;
	   width =10;
	   height =7;
	   depth = 5;	
	}	
	
	box(double w ,double h ,double d)
	{
		cout<<"\n parameterized contructor called."<<endl;
		width =w;
		height =h;
		depth =d;
	}
	
	box(const box &b1)
	{
		cout<<"\n copy contructor called."<<endl;
		width = b1.width;
		height = b1.height;
		depth = b1.depth;
	}
	
	void volume()
	{
		cout<<"\nvolume is"<<(width * height * depth);
	}
};

int main()
{
	box a1;
	a1.volume();
	
	box a2(12,32,5);
	a2.volume();
	
	box b1(a1);
	a1.volume();
	
	return 0;
}