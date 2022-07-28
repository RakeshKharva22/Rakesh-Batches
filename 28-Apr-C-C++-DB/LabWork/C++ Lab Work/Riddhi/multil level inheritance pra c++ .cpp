#include <iostream>
using namespace std;

class student
{
	public:
	 int sid ;
	 char name[10];
	  student()
	  {
	  	sid =10;
	  }
	  void getname()
	  {
	  	cout<<"\n Enter name :";
	  	cin>>name;
	  }
	
};
class sportsmarks :public student
{
	public :
		int sp;
		sportsmarks()
		{
			sp =78;
		}
};
class result :public sportsmarks
{
	public :
	int s1 ,s2 ,s3 ,total;
	float per;
	result()
	{
		s1 = 67;
		s2 = 98;
		s3 = 76;
		total = s1 +s2 +s3;
		per = (float)total/3;
	}
	void display()
	{
		cout<<"student id :"<<sid<<endl;
		cout<<"name :"<<name<<endl;
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