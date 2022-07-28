#include <iostream>
using namespace std;


class A
{
    private :
	  int riddhi1;
	  
	friend class B;
	public :
	 A ()
	 {
	     riddhi1 = 100; 	
	 }	
};

class B
{
	private :
		int riddhi2;
	
	public :
	 B ()
	 {
	 	riddhi2 = 200;
	 }
	 int add ()
	 {
	 	A a;
	 	return a.riddhi1 + riddhi2;
	 }
};
int main()
{
	B b;
	cout<<"add ="<<b.add();
	return 0;
}