/*
 *throws: It is generally used in checked Exception.
 *		 - throws come along with method signature
 *		 - throws handle multiple Exception.
 * 
 * 
 */

package com.mihir;

import java.util.Scanner;

public class ThrowsDemo {
	
	public static void demo() throws Exception
	{
		int x;
		 Scanner sc = new Scanner(System.in);
		
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
	

	public static void main(String[] args) {
		
		 try {
			demo();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	
}
