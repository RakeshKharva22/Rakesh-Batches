/*
 * Interface : provides Full Abstraction.
 * 
 *  1) It is syntax wise similar to class, but it is not a class;
 *  2) therefore it is not a class, so you cannot create object of interface.
 *  3) By Default all methods of interface are abstract.
 *  4) To defined abstract method a class must have to implements an interface.
 *  5) Once class implements the interface, class must have to define all the
 *    methods of that interface.
 *  6) One class can implement more than one interface.
 *  7) One interface is implemented by more than one class.
 *  8) Inheritance of interface is also possible.* * 
 */


interface ifs1{
	void meth1();	
}

interface ifs2 extends ifs1{
	void meth2();
}

class ABC implements ifs1,ifs2{

	public void meth1() {
		System.out.println("Interface Method1 is implemented in Class ABC");
	}
	
	public void meth2() {
		
		System.out.println("Interface Method2 is implemented in Class ABC");
	}	
}

class XYZ implements ifs2{
	
	public void meth1() {
		System.out.println("Interface Method1 is implemented in Class XYZ");
	}

	public void meth2() {	
		System.out.println("Interface Method2 in implemented in Class XYZ");
	}
	
}

public class InterfaceDemo {
	public static void main(String[] args) {
	
		ABC a = new ABC();
		a.meth1();
		a.meth2();
		
		XYZ x = new XYZ();
		x.meth1();
		x.meth2();
		
		
	}
}
