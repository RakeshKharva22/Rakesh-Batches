import java.util.Scanner;

public class LadderIfelse {

	public static void main(String[] args) {
		int rno,s1,s2,s3,total;
		float per;
		String sname;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Roll No");
		rno = sc.nextInt();
		System.out.println("Enter Subject 1");
		s1 = sc.nextInt();
		System.out.println("Enter Subject 2");
		s2 = sc.nextInt();
		System.out.println("Enter Subject 3");
		s3 = sc.nextInt();
		
		System.out.println("Enter Name: ");
		sname = sc.next();
		
		total = s1+s2+s3;
		per = total / 3;
		System.out.println("Total is "+total);
		System.out.println("Percentage is "+per);
		
		if(per>75) {
			System.out.println("Distinction");
		}else if(per>60) {
			System.out.println("First Class");
		}else if(per>50) {
			System.out.println("Second Class");
		}else if(per>40) {
			System.out.println("Pass Class");
		}else {
			System.out.println("Fail");
		}
		
		
		
	}
}
