#include<iostream>
using namespace std;



class Box{
	private:
		double width , height, depth;
		
		
		
	public:
		static int objectCount;
		
		//int objectCount;
		
		
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
//inityialize static member of clas
 int Box::objectCount = 0;

int main()

{
	Box b1(1,2,3);
	b1.volume();
	
	Box b2(4,5,6);
	b2.volume();
	Box b3(3,6,8);  
	
	cout<<"\nTotal object :"<<Box::objectCount;
	
	return 0;
}
