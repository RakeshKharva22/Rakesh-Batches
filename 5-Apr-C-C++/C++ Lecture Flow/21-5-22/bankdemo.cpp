#include <iostream>
using namespace std;

class bankDemo{
	
	public :
			//int amt;
			double balance = 0;
			
			void deposit(int amt)	
			{
				balance = balance + amt;
			}
			
			void withdraw(int amt)
			{
				
				if(amt < balance)
				{
					balance = balance - amt;
				}
				else
				{
					int needs = amt - balance;
					cout<<"You need "<<"Rs."<<needs<<" to withdraw" <<endl;
				}
			}
			
			void checkBalance()
			{
				cout<<"\nCurrent Balance : "<<"Rs."<<balance<<endl;;
			}
};

int main()
{
	bankDemo b;
	cout<<"\n----Welcome to SBI Bank-------"<<endl;
	int amt1;
	cout<<"\nEnter Amount to Deposit : ";
	cin>>amt1;
	b.deposit(amt1);
	b.checkBalance();
	int amt2;
	cout<<"\nEnter Amount to Withdraw : ";
	cin>>amt2;
	b.withdraw(amt2);
	//b.checkBalance();
	
	
	return 0;
}