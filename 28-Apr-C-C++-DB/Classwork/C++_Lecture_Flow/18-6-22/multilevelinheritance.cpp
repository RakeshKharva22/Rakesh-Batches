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
			cout<<"\nEnter Name :";
			cin>>name;
		}
};

class SportsMarks: public Student{
	public:
		int sp;
		
		SportsMarks()
		{
			sp = 89;
		}
		 void show()
		 {
		 	//getName();
		 	cout<<"Sid = "<<sid<<endl;
		 	cout<<"SP = "<<sp<<endl;
			 cout<<"Name = "<<name<<endl;		 	
		 }
};


int main()
{
SportsMarks sp;


}