import java.util.Scanner;

public class LadderIf {

	public static void main(String[] args) {
		
		int rno, sub1, sub2, sub3, total;
		String sname;
		double per;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Roll No.");
		rno = sc.nextInt();
		System.out.println("Enter Name");
		sname = sc.next();
		System.out.println("Enter Physics Marks");
		sub1 = sc.nextInt();
		System.out.println("Enter Chemistry Marks");
		sub2 = sc.nextInt();
		System.out.println("Enter Maths Marks");
		sub3 = sc.nextInt();
		
		total = sub1 + sub2 + sub3;
		per = total / 3;
		
		System.out.println("\nRoll No :" + rno);
		System.out.println("Name :" + sname);
		System.out.println("Physics Marks :" + sub1);
		System.out.println("Chemistry Marks :" + sub2);
		System.out.println("Maths Marks :" + sub3);
		System.out.println("Total is : " + total);
		System.out.println("Percentage is :" + per);
		
		
		// Ladder if/else
		
		if(per >= 75) {
			System.out.println("Distinction");
		}else if(per >=60) {
			System.out.println("First Class");
		}else if(per >=50) {
			System.out.println("Second Class");
		}else if(per >=40) {
			System.out.println("Third Class");
		}else {
			System.out.println("Failed !");
		}
		
	}
}
