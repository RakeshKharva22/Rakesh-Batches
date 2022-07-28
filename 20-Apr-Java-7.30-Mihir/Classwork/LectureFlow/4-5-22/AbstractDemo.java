/*
 * Abstraction : Hiding internal implementation and giving them some interface
 * 				 to access that feature.
 * 				e.g : Fan , Body Organs
 * 
 * 
 * abstract class :
 * 
 * 1) It contains abstract as well as non-abstract methods.
 * 2) we cannot create object of Abstract class
 * 3)It provide us partial Abstraction.
 * 4)abstract methods are just declared, they do not have body implementation.
 * 
 *  * 
 */


abstract class abs1{
	
	abstract void meth1();
	
	void meth2() {
		System.out.println("Non- Abstract Method in Abstract Class");
	}	
}

class abs2 extends abs1{

	void meth1() {
		System.out.println("Abstract Method in Non-Abstract Class");
	}
	
}


public class AbstractDemo {

	public static void main(String[] args) {
		abs2 a = new abs2();
		a.meth1();
		a.meth2();
	}
}
