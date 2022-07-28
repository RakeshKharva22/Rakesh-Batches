#include<iostream>
using namespace std;

class op_overload
{
	public:	
		
		int v;
		
		void getV(int value)
		{			
			v =value;
		}
		
		op_overload operator +(op_overload p)
		{
			op_overload res;
			res.v = v + p.v;	
		}
		
		void display()
		{
			cout<<v<<endl;
		}	
};

main()
{
	int num1,num2;
	
	cin>>num1;
	
	cin>>num2;
	op_overload a,b,sum;
	a.getV(num1);
	b.getV(num2);
	
	sum = a+b;
	sum.display();
	
}