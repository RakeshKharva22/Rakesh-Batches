#include <iostream>
using namespace std;

class krutali{
	private:
		int money = 0;
	friend int dipika(krutali);
};

//friend function definition
int dipika(krutali k)
{
	//accesing private member
	k.money += 20000;   //money = money + 20000
	 return k.money;
}
int main()
{
	krutali k1;
	cout<<"Money received : "<<dipika(k1);
	return 0;
}
