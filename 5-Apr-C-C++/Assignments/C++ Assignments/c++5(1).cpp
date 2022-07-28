#include <iostream> 

using namespace std;

int main()
{
	int a = 10, b = 20;
	float div;
	cout<<"Enter A : "<<endl;
	cin>>a;
	cout<<"Enter B :"<<endl;
	cin>>b;
	cout<<"A = "<<a<<"B ="<<b<<endl;
	cout<<"Add = "<<a+b<<endl;
	cout<<"sub = "<<a-b<<endl;
	cout<<"mul = "<<a*b<<endl;
	div = a /(float)b;
	cout<<"div = "<<div<<endl;
	return 0;
}
