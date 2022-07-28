#include<iostream>
using namespace std;
class bankdemo
{
	public:
			double balance=0;
			void deposit(int amt)
			{
				balance=balance+amt;
			}
			void withdraw(int amt)
			{
				if(amt<balance)
				{
					balance= balance-amt;
				}
				else
				{
					int needs= amt-balance;
					cout<<"you need"<<"Rs"<<needs<<"to withdraw"<<endl;
				}
			}
			void checkbalance()
			{
				cout<<"\n current balance: "<<"Rs."<<balance<<endl;
			}
};

int main()
{
	bankdemo b;
	cout<<"\n------welcome to axis bank------"<<endl;
	int amt1;
	cout<<"\nenter amout to deposit: ";
	cin>>amt1;
	b.deposit(amt1);
	b.checkbalance();
	int amt2;
	cout<<"\nenter amount to withdraw:";
	cin>>amt2;
	b.withdraw(amt2);
	//b.checkbalance();
	
	return 0;
}