package com.keywords;

import java.util.Scanner;

/*
 * static : It is a keyword.
 * 
 * -> It is used to declare to variable,method,block and inner class as static.
 * 
 * -> We do not need an object for calling a static method, it will get call with its class name/method name.
 * 
 * -> Static block is called before the main Method.
 * 
 *  -> It is used for Common Memory Management.
 * 
 * 
 * 
 */


public class StaticKeyword {
	
	static int a;
	
	void setValue()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A : ");
		a = sc.nextInt();
	}
	
	void printValue()
	{
		System.out.println("A = "+ a);
	}
	
	public static void main(String[] args) {
		
		StaticKeyword s1 = new StaticKeyword();
		StaticKeyword s2 = new StaticKeyword();
		StaticKeyword s3 = new StaticKeyword();
		
		
		
		s1.setValue();
		s2.setValue();
		s3.setValue();
		s1.printValue();
		s2.printValue();
		s3.printValue();
		
		
		
		
	}

}
