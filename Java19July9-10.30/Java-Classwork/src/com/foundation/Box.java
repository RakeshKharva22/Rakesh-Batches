package com.foundation;


/*
 * Constructor : It is same name as class name.
 * 				 No return type.
 * 				 It is a special member function whose task is to initialize the value.
 * 
 * 
 * Important point: Constructor's are automatically called when the object is created.
 * 
 * There are 3 types of constructor 
 * 
 * 1) Default Constructor
 * 2) Parameterized Constructor
 * 3) Copy Constructor.   it passes object as an argument.
 * 
 * 
 * 
 */


public class Box {

	double width,height,depth;
	
	Box()
	{
		width = 50;
		height = 5;
		depth = 4;
		System.out.println("Default Constructor Called");
	}
	
	Box(double w,double h,double d)
	{
		System.out.println("Parameterized Constructor Called.");
		width = w;
		height = h;
		depth = d;		
	}
	
	Box(Box obj)
	{
		System.out.println("Copy Constructor Called");
		width = obj.width;
		height = obj.height;
		depth = obj.depth;
	}
	
	
	void volume()
	{
		System.out.println("Volume of Box is "+ (width*height*depth));
	}
	

	public static void main(String[] args) {
		Box b1 = new Box();
		b1.volume();
		Box b2 = new Box(5,8,9);
		b2.volume();
		Box b3 = new Box(b2);
		b3.volume();
	}
}
