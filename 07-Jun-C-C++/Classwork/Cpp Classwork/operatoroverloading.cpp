#include <iostream>

/*
	not supported :    ?:   . * ::

*/

using namespace std;

class Distance{
	private:
		int feet,inches;
	public:
		Distance(int f,int i)
		{
			feet = f;
			inches = i;
		}
	
	void display()
	{
		cout<<"\nFeet = "<<feet<<"\t"<<"Inches = "<<inches;
	}
	
	
	Distance operator-()
	{
		this->feet = -feet;
		this->inches = -inches;
		return Distance(this->feet,this->inches);
	}
};

int main()
{
	Distance d1(5,-4),d2(-6,-8);
	-d1;
	d1.display();
	-d2;	
	d2.display();
	return 0;
}