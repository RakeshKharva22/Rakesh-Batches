//to find out the Area of Triangle, Rectangle and Circle using Switch Case



#include<iostream>
#include<math.h>

using namespace std;
int main()
{
/*Visit: https://www.programmingwithbasics.com/2015/11/write-c-to-calculate-area-of-circle.html*/
float a, b, c, s, radius, area;

int ch;

cout<<"1.Area Of Circle";
cout<<"\n2.Area Of Rectangle";
cout<<"\n3.Area Of Triangle \n";
cout<<"\nEnter Your Choice :";

cin>>ch;

switch(ch)
{
case 1:
{
cout<<"\nEnter the Radius of Circle: ";
cin>>radius;
area=3.14159*radius*radius;
cout<<"Area of Circle = "<<area<<endl;
break;
}
case 2:
{
cout<<"\nEnter the Length and Breadth of Rectangle:";
cin>>a>>b;
area=a*b;
cout<<"Area of Rectangle = "<<area<<endl;
break;
}
case 3:
{
cout<<"\nEnter All Three Sides of Triangle with 3 Sides:";
cin>>a>>b>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Area of Triangle = "<<area<<endl;
break;
}
default: cout<<"\n Invalid Choice Try Again...!!!";
break;
}
return 0;
}