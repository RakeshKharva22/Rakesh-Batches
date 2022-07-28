import java.util.Scanner;

/*
 * Static Keyword :
 * 
 * 1) It is used to declare variable, methods, block and innner class as static.
 * 2) We do not need an object for calling a static method or block, it will get called by its class name.
 * 3) Static block is called before the main method.
 * 4) It is used for Common Memory management.
 * 
 * 
 */
public class StaticDemo {

	 int a;
	
	void setValue() {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter A :");
		a = sc.nextInt();
	}
	
	void printValue() {
		System.out.println("A = " + a);
	}
	
	
	public static void main(String[] args) {
		StaticDemo s1 = new StaticDemo();
		StaticDemo s2 = new StaticDemo();
		StaticDemo s3 = new StaticDemo();
		
		s1.setValue();
		s2.setValue();
		s3.setValue();
		
		s1.printValue();
		s2.printValue();
		s3.printValue();
		
		
	}
}


