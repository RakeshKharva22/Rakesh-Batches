#include <iostream>
using namespace std;

class Calculation{
	public:
		int a, b, add, sub, mul;
		float div;
	    Calculation()
	    {
	        cout<<"Enter 1st number : ";
	        cin>>a;
	        cout<<"Enter 2nd number : ";
	        cin>>b;
	        
	        add = a+b;
	        cout<<"\nAddition is : "<<add<<endl;
	        
	        sub = a-b;
	        cout<<"\nSubtraction is : "<<sub<<endl;
	        
	        mul = a*b;
	        cout<<"\nMultiplication is : "<<mul<<endl;
	        
	        div = a/(float)b;
	        cout<<"\nDivision is : "<<div<<endl;
		}
};
int main()
{
	Calculation c;
	return 0;
}