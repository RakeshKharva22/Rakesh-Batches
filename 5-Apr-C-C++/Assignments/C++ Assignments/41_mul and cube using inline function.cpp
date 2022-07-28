#include<iostream>
using namespace std;
class line
{
	public:
		inline float mul(float x, float y)
		{
			return(x*y);
		}
		inline float cube(float x)
		{
			return(x*x*x);
		}
};

int main()
{
	line obj;
	float val1, val2;
	cout<<"\n Enter 1st value:: ";
	cin>>val1;
	cout<<"\n Enter 2nd value:: ";
	cin>>val2;
	cout<<"\n Multiplication value is: "<<obj.mul(val1,val2);
	cout<<"\n Cube of first value is [" << obj.cube(val1)<<"]\n and second value is : ["<< obj.cube(val2)<<"]\n";
	return 0;
}