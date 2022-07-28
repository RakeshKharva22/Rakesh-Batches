/**
 * 
 * Polymorphism : - One Name Multiple form.
 * 
 *  2 Types:
 *  
 *  1) RunTime Polymorphism    - Method oveririding - Dynamic Polymorphism
 *  2)CompileTime Polymorphism - Method overloading - Static Polymorphism
 * 
 * 
 * Method overriding :  When there is same method prototype in your both base class and derived class
 * 					    using the object of derived class then only derived class method will 
 * 						be called, so you van say that method of derived class overrides the 
 * 						method of base class.
 * 
 * Same Method prototype -> it means <return-type> same, method name same, & Arguments same. 
 * 
 * super -> Is a keyword that is used to access variables, methods and constructors from
 * 			your immediate class
 * 
 * 			super keyword will only be used in derived class, you cannot use super keyword in Base class.
 * 
 * Method overloading : Same name , different arguments.
 * 						also called as Static/ Compiletime Polymorphism
 * 
 * 
 * @author tops
 *
 */



public class PolymorphismDemo {
	
	public void getA(int a) {
		
		System.out.println("A = "+a);
	}
	
	public void getA(int a, double b) {
		System.out.println("A = "+a+" B = "+ b);
	}
	
	public void getA(float a, int b, double c) {
		System.out.println("A = "+a+ " B = "+b+" C = "+c);
	}
	
	public static void main(String[] args) {
		PolymorphismDemo pd = new PolymorphismDemo();
		pd.getA(10);
		pd.getA(10, 42.24);
		pd.getA(10.4f, 10, 47.5);
		
	}

}
