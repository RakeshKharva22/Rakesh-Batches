#include <iostream>
using namespace std;

class A 
{
   public:
   int a ,b,choice;
   void accept()
   {
      cout<<"Enter A :"<<endl;
	  cin>>a;
	  cout<<"Enter B :"<<endl;
	  cin>>b;
	  cout<<"please enter your choice ?"<<endl;
	    	
   }	
   
   void show()
   {
   	cout<<"A ="<<a<<endl;
   	cout<<"B ="<<b<<endl;
   	cin>>choice;
   	
   }
   
   void asmd()
   {
    switch (choice)   
   {
   	     
   	case 1:cout<<"Addition "<<(a+b)<<endl;
   	       break;
   	case 2:cout<<"Subtraction "<<(a-b)<<endl;
   	       break;
   	case 3:cout<<"Multiplication "<<(a*b)<<endl;
   	       break;
   	case 4:cout<<"Divison "<<(a/(float)b)<<endl;
   	       break;
   	default:cout<<"Invalid choice"<<endl;
   	        break;
   }
  }
};
int main()
{
	A a1;
	a1.accept();
	a1.show();
	a1.asmd();
	return 0;
}