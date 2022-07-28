#include<iostream>

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

class Sqr : public Side{
	public:
		
		int sqr()
		{
			return l*l;
		}
};

class Cube : public Side{
	public:
		int cube()
		{
			return l*l*l;
		}
};

int main()
{
	Sqr s;
	s.setVal(5);
	cout<<"Square root : "<<s.sqr();
	
	Cube c;
	c.setVal(7);
	cout<<"Cube : "<<c.cube();
	return 0;
}
