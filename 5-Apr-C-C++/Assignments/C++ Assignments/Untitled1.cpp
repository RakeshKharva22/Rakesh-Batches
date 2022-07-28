#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

class account
{
      public:
             char name[30];
             int acc_num, acc_type;
             int balance;
             int amount;
             
      void getData()
      {
           cout<<"\nEnter the following details\n Customer Name: ";
           gets(name);
           cout<<"\nAccount number: ";
           cin>>acc_num;
           cout<<"\nAccount type\n 1. Saving Account\n 2. Current Account";
           cin>>acc_type;
           cout<<"\Account balance: ";
           cin>>balance;
      }
      
      void Display()
      {
           cout<<"\nYour account balance: "<<balance;
      }
      
      void withdraw()
      {
           cout<<"\nEnter the amount you want to withdraw: ";
           cin>>amount;
           
           if(amount>balance)
           cout<<"\n Insufficient balance";
           else
           balance = balance-amount;
           display();
      }
      };
      
      class cur_acct : public account
      {
            public:
                   void panelty()
                   {
                        if(balance<200 && acc_type==2)
                        {
                                       balance = balance-20;
                                       display();
                        }
                   }
      };
      
      class sav_acct : public account
      {
            public:
                   void interest()
                   {
                        int t;
                        cout<<"\n Enter time interval in year: ";
                        cin>>t;
                        balance = balance*(1+2*t);
                        display();
                   }
      };
      
      void main()
      {
           account ac;
           ac.getData();
           ac.display();
           ac.withdraw();
           getc();
      }
