/*

this :-  it is a keyword which means it belongs to the CURRENT CLASS.

:: =   Scope Resolution operator.

*/



#include <iostream>

using namespace std;

class staticDemo{
	private:
			double length,breadth,height;
	public:
		    static int objectCount  ;
		  
		  staticDemo(double length, double breadth, double height)
		  {
		 		cout<<"\nParameterized Constructor Called."<<endl;
		 		this->length = length;
		 		this->breadth = breadth;
		 		this->height = height;
				 objectCount++;		 		
		  }
		  
		   static int getCount()
		  {
		  	return objectCount;
		  }
		  
		  void volume()	
		  {
		  	cout<<"\nVolume is "<<(length*breadth*height);
		  }
};

int staticDemo::objectCount = 0;   

int main()
{
	cout<<"\nInitial Object Count = "<<staticDemo::getCount();
	staticDemo S1(5,6,3);
	S1.volume();
	staticDemo S2(4,6,9);
	S2.volume();
	staticDemo S3(6,7,4);
	S3.volume();
	cout<<"\nFinal Object Count = "<<staticDemo::getCount();	
	return 0;
}