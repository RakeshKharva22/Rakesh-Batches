#include <iostream>
using namespace std;

class satyam 
{
	private :
		int money =0;
		friend int Dharmik(satyam);
};

int Dharmik (satyam s1)
{
	s1.money += 15000;
	return s1.money;
}
int main()
{
	satyam s1;
	cout<<"money received :"<<Dharmik(s1);
	return 0;
}