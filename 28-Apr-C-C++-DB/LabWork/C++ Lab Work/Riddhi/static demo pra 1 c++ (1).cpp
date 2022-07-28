#include <iostream>
using namespace std;

class staticDemo
{
    private:
	      double width ,height,depth;
    public:
	     static int objectcount;
	     
	 staticDemo(double width,double height,double depth)
	 {
	 	cout<<"\nparameterized constructor called."<<endl;
	 	 this -> width =width;
	 	 this -> height =height;
	 	 this -> depth =depth;
	 	   objectcount++;
	 	 
	 }	
	 
	  static int getcount()
	  {
	  	return objectcount;
	  }
	  
	 void volume()
	 {
	 	cout<<"\n volume is"<<(width*height*depth);
	 }
};
int staticDemo :: objectcount =0;
int main()
{
	cout<<"initial objectcount "<<staticDemo ::getcount();
	staticDemo s1(1,2,3);
	s1.volume();
	staticDemo s2(4,5,6);
	s2.volume();
	staticDemo s3(7,8,9);
	s3.volume();
	staticDemo s4(4,3,5);
	s4.volume();
	cout<<"\n final objectcount "<<staticDemo ::getcount();
	return 0;
}