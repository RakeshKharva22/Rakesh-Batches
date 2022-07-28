#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter A :";
	cin>>a;
	cout<<"Enter B :";
	cin>>b;
	cout<<"Enter C :";
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"A is greater "<<endl;
		}
		else
		{
		   cout<<"B is greater"<<endl;	
		}
	}
	
   else
	{
		if(b>c)
		{
			cout<<"B is greater"<<endl;
		}
		else
		{
			cout<<"C is greater"<<endl;
		}
	}
	return 0;
	
}