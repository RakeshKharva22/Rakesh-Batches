#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a, b, c, s, radius, area;
	
	int ch;
	
	cout<<"1.Area of Circle\n";
	cout<<"2.Area of Rectangle\n";
	cout<<"3.Area of Triangle\n";
	cout<<"Enter your choice: \n";
	
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
				cout<<"Enter the Radius of Circle: \n";
				cin>>radius;
				area= 3.14*radius*radius;
				cout<<"Area of Circle= "<<area<<endl;
				break;
			}
		
		case 2:
			{
				cout<<"Enter the length and breadth of Rectangle: \n";
				cin>>a>>b;
				area= a*b;
				cout<<"Area of Rectangle: "<<area<<endl;
				break;
			}
		
		case 3:
			{
				cout<<"Enter All Three Sides of Triangle with three sides: \n";
				cin>>a>>b>>c;
				s= (a+b+c)/2;
				area= sqrt(s*(s-a)*(s-b)*(s-c));
				cout<<"Area of Triangle= "<<area<<endl;
				break;
			}
		default: cout<<"Invalid Choice Try Again...!!\n";
		break;
	}
	return 0;
}