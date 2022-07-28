#include <iostream>
using namespace std;

class student 
{
	public :
		char name[10]="krutali";
		void attendence()
		{
			cout<<name<<"is absent"<<endl;
		}
};
class teacher
{
	public :
		char name[12]="rakesh ";
		 void attendence()
		 {
		 	cout<<name<<"is present"<<endl;
		 }
};
int main()
{
	teacher t;
	t.attendence();
}