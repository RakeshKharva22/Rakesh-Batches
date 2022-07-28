/*
 * Final Keyword : 
 * 
 * 1. You can declare to variable,method,class.
 * 2) if you declare variable as final , then you cannot change it's value & need to assigned compulsory.
 * 3) if you declare method as final , then you cannot override it.
 * 4) if you decalre class as final , then you cannot inherit the class.
 * 
 */


class final1{
	
	 final int a;
	
	 public final1(){
		 a = 40;
	 }
	 
	 
//	public final void getA() {
//		//a = 20;
//		System.out.println("A = " +a);
//	}
	 
	 
	public void getA() {
		//a = 20;
		System.out.println("A = " +a);
	}
}

 class final2 extends final1{

	int b = 20; 
	public void getA() {
		super.getA();
		System.out.println("B = "+b);
	}
}


public class FinalDemo {

	public static void main(String[] args) {
		final2 f = new final2();
		f.getA();
				
	}
	
}
