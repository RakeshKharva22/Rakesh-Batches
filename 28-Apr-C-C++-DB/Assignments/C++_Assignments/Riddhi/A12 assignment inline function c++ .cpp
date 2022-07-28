#include <iostream>
using namespace std;

class IL 
{
	public :
		int x,y,mul,cube1,cube2;
		
		inline void multiplication ()
		{
			cout<<"\nEnter x :";
			cin>>x;
			
			cout<<"Enter y :";
			cin>>y;
			
			cout<<"\nx = "<<x<<"\ny ="<<y<<endl;
		
			cout<<"Multiplication is :"<<mul<<endl;
			mul=x*y;
		}
		
		inline void cube()
		{
			cube1 = x*x;
			cout<<"cube 1 :"<<cube1<<endl;
			cube2 = y*y;
			cout<<"cube 2 :"<<cube2<<endl;
			
		 } 
};
int main()
{
	IL i;
	i.multiplication();
	i.cube();
	return 0;
}