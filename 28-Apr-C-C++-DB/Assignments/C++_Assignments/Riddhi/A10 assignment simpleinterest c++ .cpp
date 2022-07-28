#include <iostream>
using namespace std;

class simpleinterest
{
	public:
		int principalamount;
	    float si , rate ,year;
	
	simpleinterest()
	{
		rate = 2.5;
	}
	
	void show()
	{
		cout<<"---------------Simple Interest--------------"<<endl;
		
		cout<<"Enter principal amount :"<<endl;
		cin>>principalamount;
		
		cout<<"Enter year :"<<endl;
		cin>>year;
		
		cout<<"rate :"<<rate<<endl;
		
		cout<<"simple interest :"<<(si*year*rate)/(float)100;
	}
};
int main()
{
	simpleinterest s1;
	s1.show();
	return 0;
}