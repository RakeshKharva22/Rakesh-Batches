#include <iostream>

using namespace std;

class Distance{
	private:
			int feet, inches;
	public:
		Distance(int f,int i)
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
			
		void display()
		{
			cout<<"\nFeet = "<<feet<<"\nInches = "<<inches;
		}
};

int main()
{
	Distance D1(10,42);
	  // negation to object
	  -D1;
	D1.display();
}