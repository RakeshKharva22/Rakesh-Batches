/*
 * Exception : An abnormal situation arises at Runtime
 * 			   of a program is called Exception.
 * 
 * 			 It will terminate the program when there is 
 * 			 Exception is raised.
 * 
 * 2 Types : 
 * 
 * 1) Checked Exception : it handles at Compile-time. 
 * 2) Unchecked Exception : it handles during Run-Time
 * *  
 * To Handle Exception, java provides 5 keywords
 * 
 * 1) try : is a block which will be never alone.it will have either catch/finally.
 * 2) catch :
 * 3) finally
 * 4) throw
 * 5) throws
 * 
 * 
 * 
 *  */

package com.mihir;


import java.util.Scanner;

public class ExceptionDemo {
	public static void main(String[] args) {
	System.out.println("Start Code");
	int a, b, c;
	Scanner sc = new Scanner(System.in);
	try {
		System.out.println("Enter A : ");
		a = sc.nextInt();
		System.out.println("Enter B : ");
		b = sc.nextInt();
		c = a / b;	
	System.out.println("Division is :"+c);
	
	int arr[] = {1,2,3};
		System.out.println(arr[5]);
	}
	catch(Exception e)
	{
		System.out.println("Exception caught");		
	}
	finally {
		System.out.println("Finally Called");
	}
	
	System.out.println("End Code");
	}
	
	
}
