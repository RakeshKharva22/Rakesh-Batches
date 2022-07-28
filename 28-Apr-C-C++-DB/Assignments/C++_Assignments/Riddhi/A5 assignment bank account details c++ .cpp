#include <iostream>
using namespace std;

class bankaccount
{
	public:
		string ND ,TA ;
		long long AN ;
		double balance =0;
		
		bankaccount(string ND ,string TA ,long long AN)
		{
			this ->ND =ND;
			this ->TA =TA;
			this ->AN =AN;
		}
		void checkbalance()
		{
			cout<<"\nbalance is ="<<balance;
		}
		
		void deposit(int amount)
		{
			balance = balance + amount;
		}
		void withdraw(int amount)
		{
			if(amount<balance)
			{
				balance = balance -amount;
			}
			else
			{
				cout<<"Insufficient Balance";
			}
		}
        void displaydetails()
        {
	
			cout<<"\nND ="<<ND;
			cout<<"\nTA ="<<TA;
			cout<<"\nAN ="<<AN;		

		}
		
};
int main()
{
	bankaccount b1("riddhi" ,"saving" ,9056473459);
	b1.displaydetails();
	int amount;
	b1.checkbalance();
	cout<<"\nEnter Amount to Deposit : ";
	cin>>amount;
	b1.deposit(amount);
	b1.checkbalance();
	cout<<"\nEnter Amount to Withdraw : ";
	cin>>amount;
	b1.withdraw(amount);
	b1.checkbalance();	
	return 0;
}