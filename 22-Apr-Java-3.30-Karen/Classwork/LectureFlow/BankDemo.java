package com.gui;

import java.util.Scanner;

public class BankDemo {

	 public static void main(String[] args) {
		
		 CheckingAccount ca = new CheckingAccount(1001);
		 Scanner sc = new Scanner(System.in);
		 double amount;
		 System.out.println("Enter Amount to Deposit");
		 amount = sc.nextDouble();
		 ca.deposit(amount);
		 ca.checkBalance();
		 try {
			 System.out.println("Enter Amount to Withdraw");
			 amount = sc.nextDouble();		 
			ca.withdraw(amount);
			System.out.println("Withdrawl successful.");
		} catch (InsufficientFunds e) {
			System.out.println("Sorry you need another"+e.getAmount()+" $");
			
		}
	}
}
