#include <iostream>

using namespace std;

class Student{
	public:
			char name[10]="Krutali";
			 void attendance()
			{
				cout<<name<<" is Absent"<<endl;
			}
};

class Teacher : public Student{
	public:
		char name1[12]="Rakesh";
		
		void attendance()
		{
			cout<<name1<<"is Present"<<endl;
		}
};


int main()
{
	Teacher t;
	t.attendance();
	
}