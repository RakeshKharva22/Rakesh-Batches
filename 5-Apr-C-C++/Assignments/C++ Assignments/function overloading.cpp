#include<iostream>
using namespace std;

class chandra{
	   public:
	   	
	   	      int add(int a , int b)
	   	      {
	   	      	return a + b;
				 }
};
int main()
{
	chandra a;
	cout<<a.add(10,45);
	return 0;
}