#include <iostream>
using namespace std;

class Num{
	public:
		int num1;
	Num(int n1)
	{
		num1 = n1;
	}	
	void show()
	{
		cout<<"A = "<<num1;
	}
};
int main()
{
	Num n1(20);
	n1.show();
}