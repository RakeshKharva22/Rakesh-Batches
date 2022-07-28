#include <iostream>
using namespace std;

template <class D>
class Num{
	public:
		D num1;
		
		Num(D n1)
		{
			num1 = n1;
		}
		void show()
		{
			cout<<"\nA = "<<num1;
		}
};
int main()
{
	Num<int>IntNum(50);
	IntNum.show();
	Num<float>FloatNum(55.94f);
	FloatNum.show();
}