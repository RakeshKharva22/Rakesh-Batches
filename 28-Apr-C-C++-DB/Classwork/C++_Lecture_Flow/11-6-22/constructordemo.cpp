/*
Constructor : 1) Constructor same name as Class name;
			  2)No Return-type;
			  3)It is automatically Called/Invoke when object of class 
			    is created.
			 4) It is used to intialize values;
			 
	Types of Constructor : 1) Default Constructor
					      2) Parameterized Constructor  :   Value as Parameter;
					      3)Copy Constructor		    :   Object as Parameter;				
			
*/

#include<iostream>
using namespace std;

class Box{
	public:
		double width ,height,depth;
		Box()
		{
			cout<<"\n\nDefault Constructor Called."<<endl;
			width = 10;
			height = 7;
			depth = 5;
		}
		
		Box(double w,double h,double d)
		{
			cout<<"\n\nParameterized Constructor Called."<<endl;
			width = w;
			height = h;
			depth = d;
		}
		
		Box(const Box &tr)
		{
			cout<<"\n\nCopy Constructor Called."<<endl;
			width = tr.width;
			height = tr.height;
			depth = tr.depth;
		}
		
	 void volume()
		{
			cout<<"Volume is "<<(width*height*depth);
		}
};

int main()
{
	Box a1;         //Default Constructor Called.
	a1.volume();
	
	Box a2(10,32,4);   //Parameterized Constructor Called.
	a2.volume();

	Box b3(a1);			//Copy Constructor Called.
	b3.volume();
	
	return 0;
}
