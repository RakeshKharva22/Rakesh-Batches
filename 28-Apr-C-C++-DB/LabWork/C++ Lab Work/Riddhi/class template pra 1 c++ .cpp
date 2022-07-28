#include <iostream>
using namespace std;

template <class K>
class Riddhi
{
	public :
		K riddhi1;
	Riddhi(K r1)
	{
		riddhi1 = r1;
	}
	void show()
	{
		cout<<"\n A ="<<riddhi1;
	}
};
int main()
{
	Riddhi <int>IntRiddhi(20);
	IntRiddhi.show();
	Riddhi<float>FloatRiddhi(5.6f);
	FloatRiddhi.show();
	return 0;
}