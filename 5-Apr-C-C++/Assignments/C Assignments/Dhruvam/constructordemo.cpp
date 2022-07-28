#include<iostream>
using namespace std;
class box
{
	public:
			double width,height,depth;
			box()
			{
				width=5;
				height=5;
				depth=4;
				cout<<"default constructor called"<<endl;
			}
			box(double w, double h, double d)
			{
				cout<<"\n\n parameterized constructor called."<<endl;
				width=w;
				height=h;
				depth=d;
			}
			box(const box & chandu)
			{
				cout<<"\n \n copy constructor called."<<endl;
				width=chandu.width;
				height=chandu.height;
				depth=chandu.depth;
			}
			void volume()
			{
				cout<<"volume of box:"<<(width*height*depth);
			}
};

int main()
{
	box b;
	b.volume();
	
	box b1(10,3,7);
	b1.volume();
	
	box b2(b1);
	b2.volume();
	
	box*ptr=new box();
	ptr->volume();
	
	box *ptr1=new box(4,7,9);
	ptr->volume();
	
	box*ptr2=new box(*ptr1);
	ptr2->volume();
}