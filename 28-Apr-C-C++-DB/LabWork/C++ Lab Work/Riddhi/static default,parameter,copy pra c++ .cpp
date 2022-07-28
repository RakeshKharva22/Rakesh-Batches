#include <iostream>
using namespace std;

class staticDemo
{
    private:
	       double width,height,depth;
	public:
          static int objectcount;
	staticDemo()
	{
		cout<<"\n defualt constructor called."<<endl;
		this -> width=10;
		this -> height =7;
		this -> depth =5;
		objectcount++;
	}
	
	staticDemo(double width, double height, double depth)
	{
		cout<<"\n parameterized constructor called."<<endl;
		this ->width = width;
		this ->height = width;
		this ->depth = depth;
		objectcount++;
	}
	
	staticDemo(const staticDemo &s3)
	{
		cout<<"\n copy constructor called."<<endl;
		width = s3.width;
		height =s3.height;
		depth = s3.depth;
		objectcount++;
	}
	
	static int getcount()
	{
		return objectcount ;
	}
	
	void volume()
	{
		cout<<"\n volume is "<<(width*height*depth);
	}
};

int staticDemo ::objectcount = 0;

int main()
{
	cout<<"\ninitial objectcount = "<<staticDemo ::getcount();
	staticDemo s1;
	s1.volume();
	staticDemo s2(12,32,5);
	s2.volume();
	staticDemo s3(s1);
	s3.volume();
	cout<<"\nfinal objectcount ="<<staticDemo::getcount();
	
	return 0;
}