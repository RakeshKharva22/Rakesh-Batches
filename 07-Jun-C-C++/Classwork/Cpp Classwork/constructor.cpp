#include<iostream>
using namespace std;


class Box{
	public:
		double width,height,depth;
		
		Box()
		{
			cout<<"Default Constructor called.";
			width = 50;
			height = 10;
			depth = 30;
		}
		
		Box(double width, double height, double depth)
		{
			cout<<"\nParameterized Constructor Called";	
			this->width = width;
			this->height = height;
			this->depth = depth;
		}
		
		Box(const Box &v)		
		{
			cout<<"\nCopy Constructor Called";
			this->width = v.width;
			this->height = v.height;
			this->depth = v.depth;
		}
			
		void volume()	
		{
			cout<<"\nVolume of Box is: "<<(width*height*depth);
		}
};


int main()
{
	Box yash;
	yash.volume();
	Box jay(4,5,9);
	jay.volume();
	Box dhruv(jay);
	dhruv.volume();
	return 0;
}
