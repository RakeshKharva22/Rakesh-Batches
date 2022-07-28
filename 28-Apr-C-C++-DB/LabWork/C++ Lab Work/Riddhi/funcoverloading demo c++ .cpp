#include <iostream>
using namespace std;

class funcoverloading
{
	public :
		
		int add(int a ,int b)
		{
			return a + b;
		}
		int add(int a, int b ,int c)
		{
			return a + b + c;
		}
};
int main()
{
	funcoverloading f;
	cout<<"with 2 parameters "<<f.add(34,67);
	cout<<"\nwith 3 parameters "<<f.add(23,45,66);
}