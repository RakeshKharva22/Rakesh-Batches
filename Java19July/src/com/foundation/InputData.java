package com.foundation;

import java.util.Scanner;

/*****
 * 
 * new keyword -> It will create a new memory block for object of that class.
 * 
 *nextInt() -> 
 */


public class InputData {

	public static void main(String[] args) {
		
		int a,b;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A : ");
		a = sc.nextInt();
		System.out.println("Enter B : ");
		b= sc.nextInt();
		System.out.println("A = "+a + "\t B = "+b);
		System.out.println("\nAddition = "+ (a+b));
		System.out.println("\nSubtraction = "+ (a-b));
		System.out.println("\nMultiplication = "+ (a*b));
		System.out.println("\nDivision = "+ (a/(float)b));		
	}
}
