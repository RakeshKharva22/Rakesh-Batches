#include <iostream>
using namespace std;

class student
{
	public:
		int sid;
		char name [10];
		student()
		{
			sid =10;
		}
		void getname()
		{
			cout<<"\nEnter name :";
			cin>>name;
		}
};

class sportsmarks : public student
{
	public :
		int sp;
		sportsmarks()
		{
			sp = 54;
		}
};
class result :public sportsmarks
{
	public :
		int s1 ,s2 ,s3,total;
		float per;
		result()
		{
			s1 = 45;
			s2 = 67;
			s3 = 87;
			total = s1 +s2 +s3;
			per = (float)total/3;
		}
		void display()
		{
			cout<<"student id :"<<sid<<endl;
			cout<<"name  :"<<name<<endl;
			cout<<"sports marks :"<<sp<<endl;
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