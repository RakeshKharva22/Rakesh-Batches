#include <iostream>
using namespace std;

class Side{

	protected:
		int l;
	
	public:
		void setVal(int x)
		{
			l = x;	
		}	
};

class Square: public Side {
	public:
		
		int square()
		{
			return l * l;
		}
};

class Cube : public Side{
	public:
		
		int cube()
		{
			return l * l * l;
		}
};

int main()
{
Square sq;
sq.setVal(10);
cout<<"\nSquare is : "<<sq.square();

Cube c;
c.setVal(5);
cout<<"\nCube is : "<<c.cube();

return 0;
}