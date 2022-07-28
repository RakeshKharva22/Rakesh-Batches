
/*
 * This keyword :- it is used to point to the current class.
 * 
 */

class Student{
	int rno;
	String sname;
	
	
	public Student() {
		System.out.println("Default Constructor Called");
	}
	
	public Student(int rno, String sname) {
		this.rno = rno;
		this.sname = sname;
		System.out.println("RollNo :" + this.rno);
		System.out.println("Name :" + this.sname);
	}
	
	void show(Student s) {
		System.out.println("RollNo :  "+s.rno);
		System.out.println("Name : "+s.sname );
	}
	
	void display() {
		this.show(this);
	}
	
}


public class ThisKeyword {

	public static void main(String[] args) {
		Student s =  new Student(1,"Rakesh");
		s.display();
		
	}
}
