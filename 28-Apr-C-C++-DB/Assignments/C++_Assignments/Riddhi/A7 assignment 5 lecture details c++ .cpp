#include <iostream>
using namespace std;

class lecturer
{
	public :
	string namel1,sub1,course1,namel2,sub2,course2,namel3,sub3,course3,namel4,sub4,course4,namel5,sub5,course5;
	int lec1,lec2,lec3,lec4,lec5;
	
	 void lecdetails() 
	{
		cout<<"------------ lecture details-------------\n\n";
		cout<<"\nname of lec1=";
		cin>>namel1;
		cout<<"\nname of sub1=";
		cin>>sub1;
		cout<<"\nname of course1=";
		cin>>course1;
		cout<<"\nnumber of lec1=";
		cin>>lec1;
		cout<<"------------------------------------------\n\n";
		cout<<"------------------------------------------\n\n";
		cout<<"\nname of lec2 =";
		cin>>namel2;
        cout<<"\nname of sub2 =";
        cin>>sub2;
		cout<<"\nname of course2 =";
		cin>>course2;
		cout<<"\nnumber of lec2 =";
		cin>>lec2;
		cout<<"----------------------------------------\n\n";
		cout<<"----------------------------------------\n\n";
		cout<<"\nname of lec3 =";
		cin>>namel3;
		cout<<"\nname of sub3 =";
		cin>>sub3;
		cout<<"\nname of course3 =";
		cin>>course3;
		cout<<"\nnumber of lec3 =";
		cin>>lec3;
		cout<<"----------------------------------------\n\n";
		cout<<"----------------------------------------\n\n";
		cout<<"\nname of lec4 =";
		cin>>namel4;
		cout<<"\nname of sub4 =";
		cin>>sub4;
		cout<<"\nname of course4 =";
		cin>>course4;
		cout<<"\nnumber of lec4 =";
		cin>>lec4;
		cout<<"----------------------------------------\n\n";
		cout<<"----------------------------------------\n\n";
		cout<<"\nname of lec5 =";
		cin>>namel5;
		cout<<"\nname of sub5 =";
		cin>>sub5;
		cout<<"\nname of course5 =";
		cin>>course5;
		cout<<"\nnumber of lec5 =";
		cin>>lec5;
		cout<<"---------------------------------------\n\n";
		cout<<"---------------------------------------\n\n";
	    }
	    
		void display()
		{
			cout<<"-------------------------------------\n\n";
			cout<<endl;
			cout<<"Display lecture details"<<endl;
			cout<<endl;
			cout<<"--------------------------------------\n\n";
			cout<<endl;
			cout<<"\nname of lec1 ="<<namel1;
			cout<<"\nname of sub1 ="<<sub1;
			cout<<"\nname of course1 ="<<course1;
			cout<<"\nnumber of lec1 ="<<lec1;
			cout<<"-------------------------------------\n\n";
			cout<<"\nname of lec2 ="<<namel2;
			cout<<"\nname of sub2 ="<<sub2;
			cout<<"\nname of course2 ="<<course2;
			cout<<"\nnumber of lec2 ="<<lec2;
			cout<<"-------------------------------------\n\n";
			cout<<"\nname of lec3 ="<<namel3;
			cout<<"\nname of sub3 ="<<sub3;
			cout<<"\nname of course3 ="<<course3;
			cout<<"\nnumber of lec3 ="<<lec3;
			cout<<"-------------------------------------\n\n";
			cout<<"\nname of lec4 ="<<namel4;
			cout<<"\nname of sub4 ="<<sub4;
			cout<<"\nname of course4 ="<<course4;
			cout<<"\nnumber of lec4 ="<<lec4;
			cout<<"-------------------------------------\n\n";
			cout<<"\nname of lec5 ="<<namel5;
			cout<<"\nname of sub5 ="<<sub5;
			cout<<"\nname of course5 ="<<course5;
			cout<<"\nnumber of lec5 ="<<lec5;
			cout<<"--------------------------------------\n\n";
		}	
	
};
int main()
{
	lecturer l1;
	l1.lecdetails();
	l1.display();
	
}