/*
 * this  -> It points current class only.
 */


class Student{
	
	int rno;
	String sname;
	
	public Student() {
		System.out.println("Default Constructor");
	}
	
	public Student(int rno, String sname) {
		this.rno = rno;
		this.sname = sname;
		System.out.println("Roll No :"+this.rno);
		System.out.println("Name :"+ this.sname);
	}
	
	void show(Student s) {
		System.out.println("Roll No :" +s.rno);
		System.out.println("Name : "+s.sname);
	}
	void display() {
		this.show(this);
	}
	
}

public class ThisKeyword {

	public static void main(String[] args) {
		Student s = new Student(1, "Rakesh");
		s.display();
	}
	
}
