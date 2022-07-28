#include <iostream>
using namespace std;

class Student{
	public:
		int sid;
		char name[10];
	
		Student()
		{
			sid = 10;						
		}
		
		void getName()
		{
			cout<<"\nEnter Name :";
			cin>>name;
		}
};

class SportsMarks{
	public:
		int sp;
		
		SportsMarks()
		{
			sp = 89;
		}
};

class Result : public Student,public SportsMarks{
	public:
		int s1,s2,s3,total;
		float per;		
	Result()
	{
		s1 = 54;
		s2 = 65;
		s3 = 53;
		total = s1+s2+s3;
		per = (float)total / 3;
	}
	
	void display()
	{
		cout<<"Student Id : "<<sid<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Sports Marks : "<<sp<<endl;
		cout<<"Percentage : "<<per;
		
	}	
};

int main()
{
Result rs;
rs.getName();
rs.display();
}