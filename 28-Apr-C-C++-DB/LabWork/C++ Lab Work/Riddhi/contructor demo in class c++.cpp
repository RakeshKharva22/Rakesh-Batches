#include <iostream>
using namespace std;

class box
{
   public:
   	double width,height,depth; //default type
   box()
   {
      cout<<"\nDefault constructor called."<<endl;
	  width = 10;
	  height = 7;
	  depth = 5;   	
   }
   
   box(double w, double h, double d) // parameterized type
   {
   	cout<<"\nParameterized constructor called.";
   	width = w;
   	height = h;
   	depth = d;
	}
	
	box(const box &b1)     // copy type
	{
		cout<<"\n\ncopy constructor called."<<endl;
		width =b1.width;
		height =b1.height;
		depth =b1.depth;
	}	
   
   void volume()
   {
   	cout<<"\nVolume is "<<(width*height*depth);
   }
};
int main()
{
	box a1;    // default constructor called.
	a1.volume();
	
	box a2(12,32,5); // parameterized constructor called.
	a2.volume();
	
	box b1(a2);   //copy constructor called.
	a2.volume();
	
	return 0;
}