#include <iostream>
using namespace std;

class Account 
{
	public :
	  
	  string name ,bn;
	  long long ano,mo;
	  
	  Account()
	  {
	      bn = "bank of india";
		  name ="Riddhi Kanzariya";
		  ano = 99887766554;
		  mo = 9979162064;  	
	  }	
	  
	  void details()
	  {
	  	cout<<"*******************************"<<endl;
	  	cout<<"customer information "<<endl;
	  	cout<<"*******************************"<<endl;
	  	
	  	cout<<"Bank Name :"<<bn<<endl;
	  	cout<<"Name :"<<name<<endl;
	  	cout<<"Account No :"<<ano<<endl;
	  	cout<<"Moible No :"<<mo<<endl;
	  }
	
};

class Saving 
{
	public :
		long long bb ,dt ,cbb ,si ,cbbi ,wd;
		
		saving()
		{
			bb = 10000;
			
			cout<<"Bank Balance "<<bb<<endl;
		}
		
		void deposit()
		{
			cout<<"Check book not available for saving account"<<endl;
			cout<<"*************************************************"<<endl;
			cout<<"                DIPOSIT "<<endl;
			cout<<"*************************************************"<<endl;
			
			cout<<"How Much Amount Do You Want To Diposit :"<<endl;
			cin>>dt;
			
			cbb=bb+dt;
			si =(cbb*5*2)/100;
			cout<<"Your two year interest is :"<<si<<endl;
			
			cbbi =cbb+si;
			cout<<"Your current bank balance with interest is :"<<cbbi<<endl;
			
		}
		
		void withdraw()
		{
			cout<<"******************************************"<<endl;
			cout<<"              WITHDRAW "<<endl;
			cout<<"*******************************************"<<endl;
			
			cout<<"How much amount do you want to withdraw  :"<<endl;
			cin>>wd;
			
			if(cbbi<wd)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Your account balance is insufficient"<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			
			else
			{
				cout<<"Your amount withdraw successfully."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Riddhi Kanzariya your current bank balance is :"<<(cbbi-wd)<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
};

class Current
{
	public :
		
		long long mb ,balance ,deposit ,curbal ,withdraw ,lcbbs ,charge;
		
		Current()
		{
			mb=3000;
			balance = 10000;
			
			cout<<"     BANK BALANCE"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"1.In your current account must be atlist "<<mb<<endl;
			cout<<"2.No interest is paid on the current account. "<<endl;
			cout<<"3.Available if you need a check book."<<endl;
		}
		
		void deposit1()
		{
			cout<<"***********************************"<<endl;
			cout<<"             DEPOSIT"<<endl;
			cout<<"***********************************"<<endl;
			
			cout<<"How much amount do you want to deposit :"<<endl;
			cin>>deposit;
			curbal=balance + deposit;
			cout<<"Your current bank balance is :"<<curbal<<endl;
		}
		
		void withdraw1()
		{
			cout<<"**********************************"<<endl;
			cout<<"            WITHDRAW"<<endl;
			cout<<"**********************************"<<endl;
			
			cout<<"How much amount do you want to withdraw :"<<endl;
			cin>>withdraw;
			lcbbs=curbal - withdraw;
			
			if(curbal<withdraw)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Your account balance is insufficient"<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"Your amount withdraw is successfully "<<endl;
				cout<<"Your current bank balance is :"<<lcbbs<<endl;
				if(lcbbs<3000)
				{
					cout<<"since your account balance is less than 3000/n you will have to pay penalty of 300 ."<<endl;
					
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout<<"Riddhi Kanzariya your current bank balance is :"<<charge<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				}
			}
		}
};
int main()
{
	
	int choice;
	
	Account a;
	a.details();
	
	cout<<"Account types =1.saving , 2.current"<<endl;
	
	cout<<"Please enter your choice 1 & 2 :"<<endl;
	cin>>choice;
	
	if(choice == 1)
	{
		Saving s;
		s.deposit();
		s.withdraw();
	}
    else if(choice == 2)
    {
    	Current c;
    	c.deposit1();
    	c.withdraw1();
	}
	else
    {
    	cout<<"Please enter valid choice ."<<endl;
	}
	return 0;
}