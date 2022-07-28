import java.util.Scanner;

public class SwitchDemo {
	public static void main(String[] args) {
//	int a, b, choice;
//	Scanner sc = new Scanner(System.in);
//	System.out.println("Enter A : ");
//	a = sc.nextInt();
//	System.out.println("Enter A : ");
//	b = sc.nextInt();
//	System.out.println("1.Addition");
//	System.out.println("2.Subtraction");
//	System.out.println("3.Multiplication");
//	System.out.println("4.Division");
//	System.out.println("Enter Choice : ");
//	choice = sc.nextInt();
//	
//	switch(choice)
//	{
//	case 1:System.out.println("Addition is " + (a + b));
//		  break;
//	case 2:System.out.println("Subtraction is " + (a - b));
//	   break;
//	case 3:System.out.println("Multiplication is " + (a * b));
//	     break;
//	case 4:System.out.println("Division is " + (a / b));
//	  break;
//	default:
//		System.out.println("Invalid Char");
//	}
		
		
	String ch;
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter Character");
	ch = sc.next();
	switch(ch)
	{
	case "a":		
	case "e":	
	case "i":	
	case "o":	
	case "u":
	case "A":
	case "E":
	case "I":
	case "O":
	case "U":System.out.println(ch + " is vowel");
	 break;
	default : System.out.println(ch + " is Consonant");
	}
		
	
	}
}
