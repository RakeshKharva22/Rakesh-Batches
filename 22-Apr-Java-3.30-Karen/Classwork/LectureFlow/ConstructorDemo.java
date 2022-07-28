/*
 * Constructor :- Is a special member function whose task is to initialize
 * 				  object of its class.
 * 				  
 * Features : 	They have same name as class name.
 * 				No Return Types
 * 				Invocation is done automatically on creation of the object.
 * 
 * Types of Constructor:
 * 
 * 1) Default Constructor
 * 2) Parameterized Constructor
 * 3) Copy Constructor : it always takes object as arguments.
 * 
 * 
 * Parameterized and Copy Constructor are called as Constructor Overloading.
 * 
 * 				
 * 
 * 
 */


class Box{
	double width, height, depth;
	
	Box(){
		System.out.println("\nDefault Constructor Called");
		width = 4;
		height = 5;
		depth = 3;
	}
	
	Box(double w, double h, double d){
		System.out.println("\nParameterized Constructor Called");
		width = w;
		height = h;
		depth = d;
	}
	
	
	Box(Box b){
		System.out.println("\nCopy Constructor Called");
		width = b.width;
		height = b.height;
		depth = b.depth;
	}
	
	
	
	void volume() {
		System.out.println("Volume of Box is "+ (width*height*depth));
	}
}



public class ConstructorDemo {
	public static void main(String[] args) {
		
		Box b1 = new Box();
		b1.volume();
		Box b2 = new Box(14,12,3);
		b2.volume();
		Box b3 = new Box(b1);
		b3.volume();
	}

}
