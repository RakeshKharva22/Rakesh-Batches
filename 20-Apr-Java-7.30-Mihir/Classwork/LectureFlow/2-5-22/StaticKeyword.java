import java.util.Scanner;

/*
 * Static Keyword :
 * 
 * 1) It is used for common memory management.
 * 2)It is used to declare variable,method and block
 * 3)We do not need to create the object to call the static method,
 * 	 it will get call by it's class name/method name
 * 4)static block is always called before main method.* 
 * 
 * 
 * 
 * 
 */
public class StaticKeyword {

	static int a;
	
	void getA()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A:");
		a = sc.nextInt();
	}
	
	void printA() {
		System.out.println("A = "+a);
	}
	
	
	public static void main(String[] args) {
		StaticKeyword sk1 = new StaticKeyword();
		StaticKeyword sk2 = new StaticKeyword();
		StaticKeyword sk3 = new StaticKeyword();
		
		sk1.getA();
		sk2.getA();
		sk3.getA();
		
		sk1.printA();
		sk2.printA();
		sk3.printA();
		
		
		
	}
}
