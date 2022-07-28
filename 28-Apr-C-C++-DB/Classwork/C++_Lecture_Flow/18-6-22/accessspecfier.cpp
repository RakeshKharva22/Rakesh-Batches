#include<iostream>
using namespace std;

class Data{
	private:
		int a = 9;
	protected:
		void show()
		{
			cout<<"A = "<<a;
		}
};

class Code : public Data{
	private:
		int b = 87;
	public:
		void display()
		{
			show();
			cout<<"\nB = "<<b;	
		}	
};

int main()
{
	Code c1;
	c1.display();
	c1.display();
}