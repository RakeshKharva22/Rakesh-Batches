#include <iostream>
using namespace std;

class person 
{
	public :
		string member;
		int age;
		
		person()
		{
			member ="Riddhi kanzariya";
			age= 22;
		}
};

class student
{
	public :
		int s1,s2,s3,total;
		float per;
		
		student()
		{
			s1 = 34;
			s2 = 56;
			s3 = 78;
			total =s1+s2+s3;
			per = total/(float)3;
		}
};

class teacher :public person ,public student
{
	public:
		int salary;
		
		teacher()
		{
			salary = 25000;
		}
		
		void read()
		{
			cout<<"member name ="<<member<<endl;
			cout<<"age ="<<age<<endl;
			cout<<"percentage ="<<per;
		}
		
		void write()
		{
			cout<<"\nsalary ="<<salary<<endl;
		}
};
int main()
{
	teacher t;
	t.read();
	t.write();
	return 0;
}