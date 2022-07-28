import java.util.Scanner;

public class StaticKeyword {
	
	static int a;
	
	void setValue() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A :");
		a = sc.nextInt();
	}
	
	void printValue() {
		System.out.println("A = "+a);
	}
	
	public static void main(String[] args) {
		StaticKeyword s1 = new StaticKeyword();
		StaticKeyword s2 = new StaticKeyword();
		StaticKeyword s3 = new StaticKeyword();
		
		s1.setValue();
		s2.setValue();
		s3.setValue();
		
		s1.printValue();
		s2.printValue();
		s3.printValue();
		
	}

}
