
public class StaticMethod {

	static int a = 10;
	static int b;
	
	static void meth(int x) {
		System.out.println("X : "+ x);
		System.out.println("A : "+ a);
		System.out.println("B : "+ b);
	}
	
	{
		System.out.println("Block 1");
	}
	
	static {
		System.out.println("Static block initialized");
		b = a * 5;
		System.out.println("B = "+b);
	}
	
	{
		System.out.println("Block 2");
	}
	
	public static void main(String[] args) {
		new StaticMethod();
		
		meth(12);
	}
	
}
