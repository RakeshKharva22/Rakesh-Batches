import java.util.Scanner;

/*
 * Inheritance : The object of one class acquiring the properties of
 * 				 object of another class is called Inheritance.
 * 
 * 				Creating a new class from an existing class is called Inheritance.
 * 
 * Types of Inheritance
 * 
 * 1) Single Inheritance
 * 2) Multilevel Inheritance
 * 3) Multiple Inheritance
 * 4) Hierarchical Inheritance
 * 5) Hybrid Inheritance*  * 
 * 
 * * 
 */


class A{
	
	int a;
	Scanner sc = new Scanner(System.in);
	
	void getA() {
		System.out.println("Enter A :");
		a = sc.nextInt();
	}
	
	void putA() {
		System.out.println("A = "+a);
	}
	
}


class B extends A{
	
	int b;
	Scanner sc = new Scanner(System.in);
	
	void getB() {
		System.out.println("Enter B :");
		b = sc.nextInt();		
	}
	
	void putB() {
		System.out.println("B = "+b);
	}
	
}

class C extends B{
	int c;
	Scanner sc = new Scanner(System.in);
	
	void getC() {
		System.out.println("Enter C :");
		c = sc.nextInt();		
	}
	
	void putC() {
		System.out.println("C = "+c);
	}
}


public class InheritanceDemo {

	public static void main(String[] args) {
		
		C c = new C();
		c.getA();
		c.getB();
		c.getC();
		
		c.putA();
		c.putB();
		c.putC();
		
	}
}
