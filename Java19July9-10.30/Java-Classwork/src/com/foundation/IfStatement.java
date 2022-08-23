package com.foundation;

import java.util.Scanner;

public class IfStatement {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter No.");
		int a = sc.nextInt();
		
		if(a>0)
		{
			System.out.println("A is +ve");
		}
		else
		{
			System.out.println("A is -ve");
		}
	}
}
