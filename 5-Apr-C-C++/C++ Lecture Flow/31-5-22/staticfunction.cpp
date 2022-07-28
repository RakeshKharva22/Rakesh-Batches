#include<iostream>

using namespace std;


class Box{
	private:
		double width,height,depth;
		
	public:
		 
		static int objectCount;
		
		Box(double w,double h,double d)
		{
			
			width = w;
			height = h;
			depth = d;
			objectCount++;		
		}
		
		static int getCount()
		{
			return objectCount;
		}
		
		void volume()
		{
			cout<<"\nVolume is "<<(width*height*depth);
		}
};

//initialize static member of class
int Box::objectCount = 0;

int main()
{
	cout<<"\n Object Initial Stage : "<<Box::getCount();
	
	Box b1(12,5,6);  // object1 created
	b1.volume();
	
	Box b2(9,3,6);  // object2 created
	b2.volume();
	Box b3(3,6,8);
	
	cout<<"\n\n Object Final Stage: "<<Box::getCount();
	return 0;
}