#include <iostream>

using namespace std;

class Student{
	public:	
			int id;
			char name[10];
			
			Student()		
			{
				id = 100;
			}
			
			void getName()
			{
				cout<<"Enter Name  : ";
				cin>>name;
			}
};


class Result : public Student{
	
	public:	
			int s1,s2,s3,tot;
			float avg;
	
	Result()
	{
		s1 = 48;
		s2 = 60;
		s3 = 87;
		tot = s1+s2+s3;
		avg = tot / 3;
	}
	
	void display()
	{
		cout<<"\nStudent Id : "<<id;
		cout<<"\nStudent Name : "<<name;
		cout<<"\ntotal Marks : "<<tot;
		cout<<"\nPercentage : "<<avg;
	
	}
};

int main()
{
	Result rs;
	rs.getName();
	rs.display();
	
	return 0;
}
