
interface ifs3{
	
	static void meth1() 
	{
		System.out.println("Meth1 defined in ifs3");
	}
}

interface ifs4 extends ifs3{
	static void meth2()
	{
		System.out.println("Meth2 defined in ifs4");
	}
}

class ABC1 implements ifs2{

	public void meth1() {
		System.out.println("Meth1");		
	}

	public void meth2() {
		System.out.println("Meth2");
	}
	
}

class XYZ1 implements ifs2{

	@Override
	public void meth1() {
		System.out.println("Interface Method1 is implemented in Class XYZ");
		
	}

	@Override
	public void meth2() {
		System.out.println("Interface Method2 is implemented in Class XYZ");		
	}
	
}

public class interfacemethod {
	
	public static void main(String[] args) {
		ABC1 a = new ABC1();
		a.meth1();
		a.meth2();		
		ifs3.meth1();
		ifs4.meth2();
		
	}
}
