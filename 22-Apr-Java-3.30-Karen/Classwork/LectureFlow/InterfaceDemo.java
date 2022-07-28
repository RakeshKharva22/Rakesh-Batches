/*
 * interaface : -
 * 
 * 1) interface is syntax wise same as class, but it is
 * 	  not a class.
 * 2)Since it is not a class, you cannot create object of 
 * 	 interface.
 * 3)by default all methods in interface are abstract.
 * 4)to define abstract method in interface ,a class must 
 * 	 compulsory implements an interface.
 * 5)Once class implements the interface, so class should 
 *  compulsory have interface method in it.
 * 6) One class can have more than one interface.
 * 7)One interface is implemented by more than one class.
 * 8)Inheritance is also possible for interface.
 * 
 * 
 */


package com.fundamentals;

interface ifs1{
	static void meth1()
	{
		System.out.println("Interface1 Method Body using static keyword");
	}
	
}

interface ifs2 {
	void meth2();
}

class ABC implements ifs2,ifs1
{
	public void meth2() {		
		System.out.println("Implemented Interface 2 Method in class ABC");
	}

	public void meth1() {
		System.out.println("Implemented Interface 1 Method in class ABC");
	}
	
}

class XYZ extends ABC{
	public void meth2() {		
		System.out.println("Implemented Interface 2 Method in class XYZ");
	}

	public void meth1() {
		System.out.println("Implemented Interface 1 Method in class XYZ");
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
		
		ifs1.meth1();
	}
}
