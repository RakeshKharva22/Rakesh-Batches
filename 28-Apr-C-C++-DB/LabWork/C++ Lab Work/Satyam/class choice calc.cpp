#include<iostream>
using namespace std;

class S{
	  public:
		int a,b,choice;
		void accept()
		{
			cout<<endl;
			cout<<"Enter A : ";
			cin>>a;
			cout<<endl;
			cout<<"Enter B : ";
			cin>>b;
		}
		void show()
		{
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b;
			cout<<endl<<endl;
			
			cout<<"--------------------"<<endl;
			cout<<"CHOICE MENU"<<endl;
			cout<<"--------------------"<<endl<<endl;
			cout<<"1) Addition"<<endl<<endl;
			cout<<"2) Subtraction"<<endl<<endl;
			cout<<"3) Multiplication"<<endl<<endl;
			cout<<"4) Division"<<endl<<endl;
			
			cout<<"Please Enter Your Choice : ";
			cin>>choice;
			cout<<endl<<endl;
		}
		
		void asmd()
		{
         	switch(choice)
         	{
         		case 1 :cout<<"Addition = "<<a+b;
         		        break;
         		case 2 :cout<<"Subtraction = "<<a-b;
				        break;
				case 3 :cout<<"Multiplication = "<<a*b;
				        break;
				case 4 :cout<<"Division = "<<a/(float)b;	
				        break;
				default :cout<<"Invalid Choice";
				        break;					        
         		
         		
			}
		}
};
int main()
{
	S a;
	a.accept();
	a.show();
	a.asmd();
	
	return 0;
	
}