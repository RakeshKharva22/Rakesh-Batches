package com.gui;

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
			double needs = amount - this.balance;
			throw new InsufficientFunds(needs);
		}
	}
	
	public void checkBalance()
	{
		System.out.println("Cuurent Balance : "+ this.balance);
	}
	
	
}
