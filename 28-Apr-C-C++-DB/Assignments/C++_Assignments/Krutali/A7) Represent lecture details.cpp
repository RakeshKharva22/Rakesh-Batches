#include <iostream>
using namespace std;

class Lecture{
	public:
		char Lecture_Name1[20], Lecture_Name2[20], Lecture_Name3[20];
		char Subject_name1[20], Subject_name2[20], Subject_name3[20];
	    char CourseName1[20], CourseName2[20], CourseName3[20];
		int Lecture_number1, Lecture_number2, Lecture_number3;
		
		void input()
		{
			cout<<"~*~*~*~ENTER 1ST LECTURE DETAILS~*~*~*~";
			cout<<"\n\nEnter course name : ";
			cin>>CourseName1;
			cout<<"\nEnter subject name : ";
			cin>>Subject_name1;
			cout<<"\nEnter lecture number : ";
			cin>>Lecture_number1;
			cout<<"\nEnter lecture name : ";
			cin>>Lecture_Name1;
			
			cout<<"\n\n~*~*~*~ENTER 2ND LECTURE DETAILS~*~*~*~";
			cout<<"\n\nEnter course name : ";
			cin>>CourseName2;
			cout<<"\nEnter subject name : ";
			cin>>Subject_name2;
			cout<<"\nEnter lecture number : ";
			cin>>Lecture_number2;
			cout<<"\nEnter lecture name : ";
			cin>>Lecture_Name2;
			
			cout<<"\n\n~*~*~*~ENTER 3RD LECTURE DETAILS~*~*~*~";
			cout<<"\n\nEnter course name : ";
			cin>>CourseName3;
			cout<<"\nEnter subject name : ";
			cin>>Subject_name3;
			cout<<"\nEnter lecture number : ";
			cin>>Lecture_number3;
			cout<<"\nEnter lecture name : ";
			cin>>Lecture_Name3;
		}
		void Display()
		{
			cout<<"\n\n~*~*~*~DISPLAY 1ST LECTURE DETAILS~*~*~*~";
			cout<<"\n\nCourse name : "<<CourseName1<<endl<<endl;
			cout<<"Subject name : "<<Subject_name1<<endl<<endl;
			cout<<"Lecture number : "<<Lecture_number1<<endl<<endl;
			cout<<"Lecture name : "<<Lecture_Name1<<endl<<endl;
			
			cout<<"\n\n~*~*~*~DISPLAY 2ND LECTURE DETAILS~*~*~*~";
			cout<<"\n\nCourse name : "<<CourseName2<<endl<<endl;
			cout<<"Subject name : "<<Subject_name2<<endl<<endl;
			cout<<"Lecture number : "<<Lecture_number2<<endl<<endl;
			cout<<"Lecture name : "<<Lecture_Name2<<endl<<endl;
			
			cout<<"\n\n~*~*~*~DISPLAY 3RD LECTURE DETAILS~*~*~*~";
			cout<<"\n\nCourse name : "<<CourseName3<<endl<<endl;
			cout<<"Subject name : "<<Subject_name3<<endl<<endl;
			cout<<"Lecture number : "<<Lecture_number3<<endl<<endl;
			cout<<"Lecture name : "<<Lecture_Name3<<endl<<endl;
		}		 
};
int main()
{
	Lecture l;
	l.input();
	l.Display();
	return 0;
}