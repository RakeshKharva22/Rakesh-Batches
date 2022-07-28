#include <iostream>
using namespace std;

class staticDemo
{
	private:
		   double length,breadth,height;
	public:
		static int objectcount ;
	  staticDemo(double length, double breadth, double height)
	  {
	  	cout<<"\nparameterized constructor called."<<endl;
	  	this -> length = length;
	  	this -> breadth = breadth;
	  	this -> height = height;
	  	objectcount++;
	  }
	  
	  static int getcount()
	  {
	  	return objectcount;
	  }
	  
	  void volume()
	  {
	  	cout<<"\nVolume is ="<<(length*breadth*height);
	  }
};

 int staticDemo :: objectcount =0;

int main()
{
	cout<<"\ninitial object count ="<<staticDemo :: getcount();
	staticDemo s1(5,6,7);
	s1.volume();
	staticDemo s2(8,9,7);
	s2.volume();
	staticDemo s3(3,4,5);
	s3.volume();
	cout<<"\nobjectcount ="<<staticDemo :: getcount();
	
	return 0;
		
}