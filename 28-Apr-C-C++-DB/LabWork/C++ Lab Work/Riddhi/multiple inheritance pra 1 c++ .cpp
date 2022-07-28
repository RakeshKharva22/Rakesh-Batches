#include <iostream>
using namespace std;

class student 
{
	public:
		int sid;
		char name[20];
		student()
		{
			sid = 10;
		}
		void getname()
		{
			cout<<"Enter name :";
			cin>>name;
		}
};
class sportsmarks 
{
	public :
		int sp;
		sportsmarks()
		{
			sp = 98;
		}
};
class result :public student ,public sportsmarks
{
	public :
		int s1 ,s2 ,s3 ,total;
		float per;
		result()
		{
			s1 = 56;
			s2 = 78;
			s3 = 90;
			total = s1 + s2 + s3;
			per = (float)total/3;
		}
		void display()
		{
			cout<<"student id :"<<sid<<endl;
			cout<<"student name :"<<name<<endl;
			cout<<"sportsmarks :"<<sp<<endl;
	        cout<<"percentage :"<<per;
		}
};
int main()
{
	result rs;
	rs.getname();
	rs.display();
	
	
	return 0;
}