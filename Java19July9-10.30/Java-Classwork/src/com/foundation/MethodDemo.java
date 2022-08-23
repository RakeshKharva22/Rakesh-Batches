package com.foundation;

import java.util.Scanner;

public class MethodDemo {

	int a,b;
	
	Scanner sc = new Scanner(System.in);
	
	void getVal()
	{
		System.out.println("Enter A :");
		a = sc.nextInt();
		System.out.println("Enter B :");
		b = sc.nextInt();
	}
	
	void showVal()
	{
		System.out.println("A = "+a);
		System.out.println("B = "+b);
	}
	
	
	public static void main(String[] args) {
		
		MethodDemo md = new MethodDemo();
		md.getVal();
		md.showVal();
	}
}
