#include <iostream>
using namespace std;

class student{
	public:
		int sid;
		char name[10];
		
		student()
		{
			sid = 10;
		}
		void getname()
		{
			cout<<"Enter name : ";
			cin>>name;
		}
};
class SportsMarks{
	public:
		int sp;
		SportsMarks()
		{
			sp = 79;
		}
};
class Result : public student, public SportsMarks{
	public:
		int s1, s2, s3, total;
		float per;
		Result()
		{
			s1 = 69;
			s2 = 87;
			s3 = 96;
			total = s1+s2+s3;
			per = (float)total/3;
		}
		void display()
		{
			cout<<"Student ID : "<<sid<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Sports Marks : "<<sp<<endl;
			cout<<"Percentage : "<<per<<endl;
		}
};
int main()
{
	Result rs;
	rs.getname();
	rs.display();
}