/*
 * throw --> it is not a block of code like 
 * 			 try{} and catch{}.
 * 			 it is just a keyword.
 * 
 * Rules to use throw keyword
 * 
 * 1) throw is always defined inside method.
 * 2) At a time you can only throw one Exception.
 * 3) throw will be used with the object of 
 * 	  that particular class.
 * 4)when you use throw , you cannot write
 * 	 code after throw statement. 
 * 
 * 
 */

package com.mihir;

import java.util.Scanner;

public class ThrowDemo {
	
	public static void demo() 
	{
		int x;
		 Scanner sc = new Scanner(System.in);
		 try {
			 System.out.println("Enter A :");
			 x = sc.nextInt();
			 if(x>0)
			 {
				 System.out.println("square is "+ (x*x));
			 }
			 else
			 {
				 throw new Exception("Please enter +ve Value.");
			 }
		 }
		 catch(Exception e)
		 {
			 System.out.println("Exception caught"+e);
			 demo();
		 }
	}
	

	public static void main(String[] args) {
		
		 demo();
	}
	
	
}
