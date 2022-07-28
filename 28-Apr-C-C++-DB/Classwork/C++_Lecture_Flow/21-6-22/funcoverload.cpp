#include <iostream>
using namespace std;

class funcoverloading{
	public:
		int add(int a, int b)
		{
			return a + b;
		}
		
		int add(int a, int b,int c)
		{
			return a+b+c;
		}
};


int main()
{
		funcoverloading f;
		cout<<"With 2 parameters "<<f.add(45,78)<<endl;
		cout<<"With 3 parameters "<<f.add(32,43,54);
}