import java.util.Scanner;

/*
 * 
 * Final Keyword :
 * 
 *1) final keyword is declared to variable,methods,class
 *2) if you declare variable as a final, then you cannot modify the value
 *  and compulsory need to initialized;
 *3) if you declare method as final you cannot override the methods.
 *4)if you declare class as final you cannot inherit.* 
 * 
 * 
 * 
 */

class final1{
	final int a;
	
	public  void putA() {
		
		System.out.println("A = "+ a);
	}
	
	public final1() {
		a = 10;
	}
}

class final2 extends final1{
	
	int b =54;
	
	public void putA() {
		System.out.println("A = "+a);
		System.out.println("B = "+b);
		
	}
}

public class FinalDemo {

	public static void main(String[] args) {
		final2 f = new final2();
		f.putA();
	}
}
