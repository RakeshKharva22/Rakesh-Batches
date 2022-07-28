import java.util.Scanner;

/*
 * Datatypes
 * 
 * byte    1 byte    Byte
 * short   2 byte 	 Short
 * int 	   4 byte 	 Integer
 * long    8 byte 	 Long
 * float   4 byte 	 Float
 * double  8 byte 	 Double
 * character 1 byte	 Character
 * boolean  true/false  Boolean
 *  * 
 * 
 * Variable : It is a name at memory location which contains Value of different types.
 * 
 * ex. int a = 10;
 * 
 * int -> Datatype
 * a -> Variable Name
 * 10 -> Value
 * 
 *  Rules for Variable
 *  
 *  1) First Character should not be numeric/Special Character
 *  2)Special Character is not allowed except _ and $.
 *  3)Uppercase and Lowercase is significant.
 *  4) It follows ASCII Rule
 *  ASCII (American Standard Code for Information Interchange)
 *  
 *  A to Z -> 60 to 90.
 *  a to z -> 97 to 122.
 * 
 * System.in --> To Take Input
 * System.out --> To Print Output* ** 
 * 
 * * 
 * 
 */

public class Sample {
	
	public static void main(String[] args) {
	
		int a, b;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A :");
		a = sc.nextInt();
		System.out.println("Enter B :");
		b = sc.nextInt();
		System.out.println("Addition is " + (a + b));
		
	}

}
