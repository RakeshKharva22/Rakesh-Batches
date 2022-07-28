import java.util.Scanner;

public class SwitchDemo {

	public static void main(String[] args) {
		int a, b, choice;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A :");
		a = sc.nextInt();
		System.out.println("Enter B :");
		b = sc.nextInt();
		System.out.println("\n1.Addition \n2.Subtraction \n3.Division \n4.Multiplication");
		System.out.println("\nEnter Choice");
		choice = sc.nextInt();
		
		switch(choice) {
		
		case 1:System.out.println("Addition is "+ (a + b));
			  break;
		case 2:System.out.println("Subtraction is "+ (a - b));
			  break;
		case 3:System.out.println("Division is "+ (a / b));
			  break;
		case 4:System.out.println("Multplication is "+ (a * b));
		      break;
		default:System.out.println("Invalid No.");
			 break;
		
		}
		
	}
}
