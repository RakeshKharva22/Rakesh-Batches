#include <iostream>
using namespace std;


class A
{
	public:
     int a;
	 
	 void accept()
	 {
	 	cout<<"Enter A :";
	 	cin>>a;
	 }
	 
	 void show()
	 {
	 	cout<<"A ="<<a;
	 }
	 
	 public :	
	 int b;
	 
	 void accept1()
	 {
	    cout<<"Enter B :";
	    cin>>b;
	 }
	 
	 void show1()
	 {
	 	cout<<"B ="<<b;
	 }
};
int main()
{
	A a1 ,a2;
	a1.accept();
	a1.show();
	a2.accept1();
	a2.show1();
	return 0;
	
}