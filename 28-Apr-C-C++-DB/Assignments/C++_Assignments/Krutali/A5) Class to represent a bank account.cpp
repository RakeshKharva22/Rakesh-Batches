#include <iostream>
using namespace std;

class Bank{
	private:
		char Name[20];
		int Account_Number;
		char Account_Type[10];
		float Balance;
	public: 
	    Bank(int acc_no, char *name, char *acc_type, float balance)
	{
		Account_Number = acc_no;
		strcpy(Name, name);
		strcpy(Account_Type, acc_type);
		Balance = balance;
	}
	void deposit();
	void withdraw();
	void display();
};
void Bank :: deposit()
{
	int damt1;
	cout<<"\nEnter Deposit Amount : ";
	cin>>damt1; 
}
void Bank :: withdraw()
{
	int wamt1;
	cout<<"\nEnter Withdraw Amount : ";
	cin>>wamt1;
}
void Bank :: display()
{
	cout<<"\n-*-*-*-Display details -*-*-*-\n";
	cout<<"\nName : "<<Name;
	cout<<"\nBalance : "<<Balance;
}
int main()
{
	int Account_Number;
	char Name[20], Account_Type[20];
	float Balance;
	cout<<"-*-*-*-Enter details-*-*-*-";
	cout<<"\n\nAccount Number : ";
	cin>>Account_Number;
	cout<<"\nName : ";
	cin>>Name;
	cout<<"\nAccount Type : ";
	cin>>Account_Type;
	cout<<"\nBalance : ";
	cin>>Balance;
	
	Bank b(Account_Number, Name, Account_Type, Balance);
	b.deposit();
	b.withdraw();
	b.display();
	return 0;
}