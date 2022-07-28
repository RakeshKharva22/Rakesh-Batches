import java.util.Scanner;

class A{
	int a;
	
	void getA()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A :");
		a = sc.nextInt();		
	}
	
	void putA()
	{
		System.out.println("A = "+ a);
	}
}


class B extends A
{
	int b;
	
	void getB()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter B :");
		b = sc.nextInt();		
	}
	
	void putB()
	{
		System.out.println("B = "+ b);
	}
}

class C extends B{

	int c;
	
	void getC()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter C :");
		c = sc.nextInt();		
	}
	
	void putC()
	{
		System.out.println("C = "+ c);
	}
}


public class InheritanceDemo {
	public static void main(String[] args) {
		C c = new C();
		
		c.getA();
		c.getB();
		c.getC();
		
		c.putA();
		c.putB();
		c.putC();
		
	}
}
