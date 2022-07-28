#include<iostream>

using namespace std;


class Box{
	private:
		double width,height,depth;
		
	public:
		 
		static int objectCount;
		
		Box(double w,double h,double d)
		{
			cout<<"Parameterized Called";
			width = w;
			height = h;
			depth = d;
			objectCount++;		
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
	Box b1(12,5,6);  // object1 created
	b1.volume();
	
	Box b2(9,3,6);  // object2 created
	b2.volume();
	Box b3(3,6,8);
	
	cout<<"\n\nTotal Object : "<<Box::objectCount;
	return 0;
}