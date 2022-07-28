#include<iostream>
class fact
{
	public:
			int f,i,n;
			fact()
			{
				f=1;
			}
			int op()
			{
				cout<<"enter the number:";
				cin>>n;
				for(i=1;i<=n;i++)
				{
					f=f*i;
				}
				cout<<"factorial of number"<<"\n"<<f;
			}
};
int main()
{
	fact h;
	h.op();
}