package com.mihir;

public class CheckingAccount {

	int accno;
	double balance = 0;
	
	public CheckingAccount(int accno) {
		this.accno = accno;
	}
	
	public void deposit(double amount)
	{
		this.balance = this.balance + amount;
	}
	
	public void withdraw(double amount) throws InsufficientFunds
	{
		if(amount < this.balance)
		{
			this.balance = this.balance - amount;
		}
		else
		{
			double needs;
			needs = amount - this.balance;
			throw new InsufficientFunds(needs);
		}
	}
	
	public void checkBalance()
	{
		System.out.println("Current Balance : "+this.balance+"\n");
	}
	
}
