#include <iostream>
using namespace std;

class box
{
   public:
   double width,height,depth;
   box()
   {
   	cout<<"\n default contructor called"<<endl;
   	width = 10;
   	height = 7;
   	depth = 5;
	}
	
	void volume()
	{
		cout<<"\n volume is"<<(width*height*depth);
	}	 
};
int main()
{
	box a1;
	a1.volume();
	
	return 0;	
}