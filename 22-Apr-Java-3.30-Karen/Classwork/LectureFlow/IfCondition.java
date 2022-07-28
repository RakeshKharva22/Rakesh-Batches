import java.util.Scanner;

public class IfCondition {
	
	public static void main(String[] args) {
		
		int a, b, c ;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A :");
		a = sc.nextInt();
		System.out.println("Enter B :");
		b = sc.nextInt();
		System.out.println("Enter C :");
		c = sc.nextInt();
		System.out.println("A = "+a+" , B = " + b + ", C = "+c);
		
//		
//		if(a > b) {
//			System.out.println(a + " is Greater");
//		}else {
//			System.out.println(b + " is Greater");
//		}
		
		
//		if (a % 2 == 0) {
//			System.out.println(a + " is Even");
//		}else {
//			System.out.println(a + " is Odd");
//		}
		
		
// Nested If		
		
		if(a > b) {			
			if(a > c) {
				System.out.println("A is Greater");
			}else {
				System.out.println("C is Greater");
			}		
			
		}else {
			if(b > c) {
				System.out.println("B is Greater");
			}else {
				System.out.println("C is Greater");	
			}
				
		}
		
		
		
	}

}
