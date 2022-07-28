#include <iostream>
using namespace std;

class Data
{
	private	:
		int a =10;
	protected :
	void show()
		{
			cout<<"A :"<<a;
		}
};
class code :public Data
{
	private :
		int b=20;
	public :
	 void display()
	 {
	 	show();
	 	cout<<"\n B :"<<b;
	 }
	 
};
int main()
{
    code c1;
	c1.display();
	return 0;
}