#include<iostream>
using namespace std;

class Distance{
	public:
		int feet,inches;
		
		Distance(int f, int i)
		{
			feet = f;
			inches = i;
		}
		
		Distance operator-()
		{
			feet = -feet;
			inches = -inches;
			return Distance(feet,inches);
		}
		void show()
		{
			cout<<"\nF = "<<feet<<"\nI = "<<inches;
		}
};

int main()
{
	Distance D1(-10,-3),D2(32,-3);
	-D1;
	-D2;
	D1.show();
	D2.show();
}
