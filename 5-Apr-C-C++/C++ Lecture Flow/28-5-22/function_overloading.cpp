#include<iostream>
using namespace std;
class Math
{
	public:
	int sum(int a,int b)
	{
		return a+b;
	}
	
	int sum(int a,int b,int c)
	{
		return a+b+c;
	}
	
	int sum(int a,float b,int c,int d)
	{
		return a+b+c+d;
	}
};
int main()
{
	Math m ;
	cout<<m.sum(10,20)<<endl;
	cout<<m.sum(10,20,30)<<endl;
	cout<<m.sum(20,20.5,30,10);
}
