/*
	Constructor : Same name as class Name
				  No return type.
				  it initializes the value to member variable;
				  
	Important: Automatically Called when you create an object of class;
				  
	3 Types : 1) Default Constructor / Paramterless Constructor
			  2) Parameterized Constructor
			  3) Copy Constructor	-> 		  
										pass object as an argument.
*/





#include<iostream>
using namespace std;

class Box{
	
		public:
			double width,height,depth;
			
			Box()    // Default Constructor
			{
				width = 5;
				height = 5;
				depth = 4;
				cout<<"Default Constructor Called"<<endl;
			}
			
			Box(double w, double h, double d)   //Parameterized Constructor
			{
				cout<<"\n\nParameterized Constructor Called."<<endl;
				width = w;
				height = h;
				depth = d;
			}
			
			Box(const Box &chandu)
			{
				cout<<"\n\n Copy Constructor Called."<<endl;
				width = chandu.width;
				height = chandu.height;
				depth = chandu.depth;
			}
			
			void volume()
			{
				cout<<"Volume of Box : "<<(width*height*depth);
			}
			
			
};


int main()
{
/*	Box b;          //Default Constructor Called.
	b.volume(); 
	
	Box b1(10,3,7);  // Parameterized Constructor Called.
	b1.volume();
	
	Box b2(b1);    // Copy Constructor
	b2.volume();
	*/
	
	// using new keyword  ==== Dynamic Constructor
	
	Box *ptr = new Box();			// same as Box b;         
	ptr->volume();           
	
	Box *ptr1 = new Box(4,7,9);		//same as  Box b1(10,3,7);
	ptr1->volume();
	
	Box *ptr2 = new Box(*ptr1);		//same as  Box b2(b1);
	ptr2->volume();
}