package com.keywords;

/*
 * final :  It is a keyword in java.
 * 
 * If you declare the variable as final then you cannot change the value & also need to assigned compulsory.
 * 
 * When you declare the method as final , you cannot override that method.
 * 
 * When the class is declared as final, you cannot inherit that class
 * 
 */

//final class final1{
	 class final1{
	
	final int a = 100;
	
	final void show()
	{
		
		System.out.println("A = "+a);
	}
}

class final2 extends final1{
	
//	void show()
//	{
//	
//	}
}


public class FinalKeyword {

	public static void main(String[] args) {
		final2 f1 = new final2();
		f1.show();
	}
}
