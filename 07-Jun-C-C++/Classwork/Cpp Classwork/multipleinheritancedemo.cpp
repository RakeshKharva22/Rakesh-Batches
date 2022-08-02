 #include <iostream>
 using namespace std;
 
 class Student{
 	public:
 		int Sid;
 		char Sname[10];
 		
 		Student()
 		{
 			Sid = 21; 				
		 }
		 
	 void getName()
	 {
	 	cout<<"Enter your Name";
	 	cin>>Sname;
	 }
 };
 
 class ExtraMarks{
 	public:
 		int sp;
 		
 		ExtraMarks()
 		{
 			sp = 59;
		 }
 };
 
 class Result : public Student, public ExtraMarks {
 
 	public:
 		int s1,s2,total;
 		int avg;
 		
 	Result()
	 {
		s1 = 60;
		s2 = 55;
		total = s1+s2;
		avg = total/2;  	
	 }
	 
	 void display()
	 {
	 	cout<<"\nStudent Id : "<<Sid;
	 	cout<<"\nStudent Name : "<<Sname;
	 	cout<<"\nSports Marks : "<<sp;
	 	cout<<"\nTotal Marks : "<<total;
	 	cout<<"\nAverage Marks : "<<avg;
	 }
	 	
 };
 
 int main()
 {
 	Result rs;
 	rs.getName();
 	rs.display();
 	
 	return 0;
 }