#include <iostream>
using namespace std;

class Student{
	protected:
		int sid;
		char name[10];
		
		Student()
		{
			sid = 10;
		} 
		void getName()
		{
			cout<<"Enter name : ";
			cin>>name;
		}
};
class SportsMarks: public Student{
	public:
		int sp;
		SportsMarks()
		{
			sp = 95;
		}
		void show()
		{
			getName();
			cout<<"Student ID : "<<sid<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Sports Marks : "<<sp<<endl;
		}
};

int main()
{
	SportsMarks sp;
	sp.show();
	return 0;
}