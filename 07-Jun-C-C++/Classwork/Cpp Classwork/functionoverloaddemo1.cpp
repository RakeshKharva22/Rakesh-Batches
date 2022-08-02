#include<iostream>

using namespace std;

class Demo{
	public:
		int mul()
		{
			return 2*2;
		}
		
		int mul(int a)
		{
			return a*a;
		}
};


int main()
{
	Demo obj;
	cout<<obj.mul();
	cout<<"\n"<<obj.mul(5);
	return 0;
}