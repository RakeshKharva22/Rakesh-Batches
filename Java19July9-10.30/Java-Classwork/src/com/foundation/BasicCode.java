package com.foundation;
/*
 * 
 * Datatypes : 
 * 
 * Type				Class					Size
 * 
 * short		    Short					1 byte
 * byte				Byte					1 byte
 * char				Character				1 byte
 * int 				Integer					4 Byte
 * float			Float					4 Byte
 * double			Double					8 Byte
 * long				Long					8 Byte * 
 * boolean			Boolean					1 bit  -> True/False
 * 
 * 
 * 
 * Variable : 
 * 
 * It is a name at memory location, which store value of particular type.
 * 
 * e.g   1) int a = 10;
 * 
 * 			int -> Datatype
 * 			a -> variable name	
 * 			10 -> Value.
 * 
 * Rules :
 * 
 * 1) First character should not be a digit.
 * 2) No Special symbols allowed. except _ $
 * 3) It is Case Sensitive.
 * 4) It follows Ascii rule
 * 
 * a , A -> Both are different.
 * 
 * American Standard code for information interchange.
 * 
 * 
 * 
 *  
 * 
 * 
 * 
 */


public class BasicCode {
	
	
	public static void main(String[] args) {
		System.out.println("Welcome to Java Programming");
		System.out.println("It is enjoying to Learn in Tops");
		System.out.println("At C.G Road");
				
		int a = 10, b= 20;
		
		System.out.println("\n\nA = "+a + "\tB = "+b);
		
		System.out.println("\nAddition = "+(a+b));
		System.out.println("\nSubtraction = "+(a-b));
		System.out.println("\nMultiplication = "+(a*b));
		System.out.println("\nDivision = "+(a/(float)b));
		
		
	}
}





















