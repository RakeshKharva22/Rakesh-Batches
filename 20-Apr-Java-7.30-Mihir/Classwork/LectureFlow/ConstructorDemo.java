
class Box{
	double width, height, depth;
	Box(){
		System.out.println("Default Constructor Called");
		width = 5;
		height = 4;
		depth = 3;
	}
	
	Box(double w, double h, double d){
		System.out.println("Parameterized Constructor Called");
		width = w;
		height = h;
		depth = d;		
	}
	
	Box(Box b){
		System.out.println("Copy Constructor Called");
		width = b.width;
		height = b.height;
		depth = b.depth;
	}
	
	void volume() {
		System.out.println("Volume is "+(width*height*depth));		
	}
	
	
}



public class ConstructorDemo{
	public static void main(String[] args) {
	Box b1 = new Box();
	b1.volume();
	Box b2 = new Box(7,6,3);
	b2.volume();
	Box b3 = new Box(b1);
	b3.volume();
	
	}
	
}