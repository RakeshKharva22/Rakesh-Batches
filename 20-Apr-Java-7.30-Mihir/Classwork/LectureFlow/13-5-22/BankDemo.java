package com.mihir;

import java.util.Scanner;

public class BankDemo {

	public static void main(String[] args) {
		CheckingAccount ca = new CheckingAccount(1001);
		double amount;
		Scanner sc = new Scanner(System.in);
		ca.checkBalance();
		System.out.println("Enter Amount to Deposit");
		amount = sc.nextDouble();
		ca.deposit(amount);
		ca.checkBalance();
		try {
		System.out.println("Enter Withdraw Amount");
		amount = sc.nextDouble();		
			ca.withdraw(amount);
			System.out.println("Withdrawl successful.");
			ca.checkBalance();
		} catch (InsufficientFunds e) {
			// TODO Auto-generated catch block
			System.out.println("Sorry you need another "+ e.getAmount()+" Rs.");
		}
	}
}
