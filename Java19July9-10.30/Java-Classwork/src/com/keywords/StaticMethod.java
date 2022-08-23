package com.keywords;


/*
 * 
 * Normal Block will get called only and only when the object of that class is created.
 * 
 * If the object is not created, then the Block will not get called.
 * 
 * 
 * 
 */
public class StaticMethod {

	static int a =10;
	static int b;
	
	static void meth(int x)
	{
		System.out.println("X = "+ x);
		System.out.println("A = "+ a);
		System.out.println("B = "+ b);
	}
	
	{
		System.out.println("Block 1 Called");
	}
	
	static {
		System.out.println("Static block Initialized");
		b = a*4;
	}
	
	{
		System.out.println("Block 2 called");
	}
	
	
	public static void main(String[] args) {
		StaticMethod s1 = new StaticMethod();
		meth(12);
	}
}












