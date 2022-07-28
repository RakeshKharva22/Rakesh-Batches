/* Polymorphism : One name, Multiple Form
 * 
 * 2 Types : 
 * 
 * 1) Runtime Polymorphism - Dynamic Polymorphism - Method overriding
 * 2)Compile Polymorphism - Static Polymorphism - Method overloading 
 * 
 * 
 * 
 * Method overriding
 * 
 * When there is same method prototype in your both base class
 * and derived class and if you call that method using the object of derived class
 * than only derived class method will be called, so you can say that 
 * the method of derived class overrides the method of base class.
 * 
 *  same prototype :- it means <return-type> same, method name same,& arguments same.
 *
 */

class methodoverloading{
	
	void A1(int a)
	{
		System.out.println("A = "+a);
		
	}
	
	void A1(int a, int b)
	{
		System.out.println("A = "+a + "B = "+b);
	}
	
	void A1(double a , float b, int c)
	{
		System.out.println("A = "+ a + " B = "+ b + "C = "+c);
	}
}

public class PolymorphismDemo {

	public static void main(String[] args) {
		methodoverloading mo = new methodoverloading();
		mo.A1(12);
		mo.A1(45, 74);
		mo.A1(41.3, 41.2f, 44);
	}
	
}
