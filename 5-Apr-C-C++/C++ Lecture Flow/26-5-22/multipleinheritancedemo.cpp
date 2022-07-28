#include<iostream>

using namespace std;

class Student{
	public:
			int id;
			string name;
			
			Student()
			{
				id = 100;
			}
			
			void getName()
			{
				cout<<"Enter Name : ";
				cin>>name;
			}
};


class Extra{
	
	public:
			int sp_marks;
			
			Extra()		
			{
				sp_marks = 87;
			}
};

class Result : public Student,public Extra {    //Multiple inheritance
	
	public:
			int s1,s2,s3,total;
			float avg;
			
			Result(int m1,int m2,int m3)
			{
				s1 = m1;
				s2 = m2;
				s3 = m3;
				total = s1 + s2 + s3;
				avg = total / 3;
			}
			
			void show()
			{
				cout<<"\n---------------Student Info------------\n\n";
				cout<<"\nStudent Id : "<<id;
				cout<<"\nStudent Name : "<<name;
				cout<<"\nTotal Marks : "<<total;
				cout<<"\nPercentage : "<<avg;
				cout<<"\nSports Marks : "<<sp_marks;
			}
};


int main()
{
//	Result *rs = new Result(45,74,56);
//	rs->getName();
//	rs->show();

Result rs(45,56,23);
rs.getName();
rs.show();
	

	return 0;
}