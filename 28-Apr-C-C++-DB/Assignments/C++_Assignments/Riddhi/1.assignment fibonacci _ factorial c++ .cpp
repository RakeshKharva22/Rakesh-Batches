#include <iostream>
using namespace std;

class A 
{
	int n,a,b,c,i,f;
	public:
	void fib()
	{
		a =0;
		b =1;
		cout<<"Enter number of terms";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cout<<a<<endl;
			c=a+b;
			a=b;
			b=c;
		}
    }
	void factorial()
	{
		f =1;
		cout<<"Enter any number";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		cout<<"factorial"<<f;
	}
	
};
int main()
{
	
    A obj;
	obj.fib();
	obj.factorial();
	return 0;
}
