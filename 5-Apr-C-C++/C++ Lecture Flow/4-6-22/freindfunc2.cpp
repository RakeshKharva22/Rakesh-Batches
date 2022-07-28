#include<iostream>

using namespace std;

class Distance{
	private:
		int meter;
	
	friend int addNum(Distance);
	public:
		Distance()
		{
			meter = 0;
		}
};

int addNum(Distance d)
{
	d.meter += 8;
	return d.meter;
}

int main()
{
	Distance d;
	cout<<" Meter = "<<addNum(d);
}