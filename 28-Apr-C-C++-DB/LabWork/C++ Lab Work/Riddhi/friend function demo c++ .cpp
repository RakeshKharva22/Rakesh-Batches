#include <iostream>
using namespace std;

class satyam
{
	private :
		int money =0;
	friend int Dharmik(satyam);
	
};

//friend function definition 
int Dharmik(satyam s1)
{
	//accessing private member
	 s1.money += 5000;   //money = money + 5000;
	 return s1.money;
}
int main()
{
	satyam s1;
	cout<<"Money Received :"<<Dharmik(s1);
	return 0;
}