#include <iostream>
using namespace std;

class FunctionOverloading{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
		int add(int a, int b, int c)
		{
			return a+b+c;
		}
};

int main()
{
    FunctionOverloading f;
    cout<<"Sum of 2 parameters : "<<f.add(12,13)<<endl;
    cout<<"Sum of 3 parameters : "<<f.add(14,21,35)<<endl;
}