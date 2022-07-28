#include<iostream>
using namespace std;



class Box{
	private:
		double width , height, depth;
		
		
		
	public:
		
		int objectCount;
		
		
		Box(double w,double h,double d)
		{
			width = w;
			height = h;
			depth = d;
			objectCount++;
		}
		
		void volume()
		{
			cout<<"\nvolume is "<<(width*height*depth);
			
		}
	
	
};


int main()

{
	Box b1(1,2,3);
	b1.volume();
	
	Box b2(4,5,6);
	b2.volume();
	
	return 0;
}
