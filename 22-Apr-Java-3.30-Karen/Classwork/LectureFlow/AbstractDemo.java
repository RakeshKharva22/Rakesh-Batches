package com.fundamentals;


abstract class abs1{
	
	abstract void meth1();
	
	void meth()
	{
		System.out.println("Non Abstract Method");
	}
}

class abs2 extends abs1{

	void meth1() {
		System.out.println("Meth1 implemented in Class abs2");
	}
	
}



public class AbstractDemo {

	public static void main(String[] args) {
		abs2 a = new abs2();
		a.meth();
		a.meth1();
	}
}
