#include <iostream>

using namespace std;

class staticDemo{
	private:
		double length, breadth, height;
	public:
			static int objectcount;
			
			staticDemo(double length, double breadth, double height)
			{
				cout<<"\n\nParameterized constructor called"<<endl;
				this->length=length;
				this->breadth=breadth;
				this->height=height;
				objectcount++;
			}
			static int getcount()
			{
				return objectcount;
			}
			void volume()
			{
				cout<<"\nVolume is : "<<(length*breadth*height);
			}
};

int staticDemo::objectcount=0;

int main()
{
	cout<<"Initial object count = "<<staticDemo::getcount();
	staticDemo S1(1,2,3);
	S1.volume();
	staticDemo S2(4,5,6);
	S2.volume();
	staticDemo S3(7,8,9);
	S3.volume();
	cout<<"\n\nFinal object count = "<<staticDemo::getcount();
	return 0;
}