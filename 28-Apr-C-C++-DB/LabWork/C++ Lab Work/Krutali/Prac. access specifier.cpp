#include <iostream>
using namespace std;

class Data{
	private:
		int a=10;
	protected:
		void show()
		{
			cout<<"A = "<<a<<endl;
		}
};
class code : public Data{
	private:
		int b=99;
	public:
		void display()
		{
			show();
			cout<<"B = "<<b<<endl;
		}
};
int main()
{
	code c;
	c.display();
	c.display();
}