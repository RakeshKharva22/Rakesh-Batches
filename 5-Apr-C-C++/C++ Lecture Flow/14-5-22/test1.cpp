#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 20;
	float div;
	cout<<"Enter A : "<<endl;
	cin>>a;
	cout<<"Enter B : "<<endl;
	cin>>b;
	cout<<"A = "<<a<<"\tB = "<<b<<endl;
	cout<<"\n--Calculator---\n"<<endl;
	cout<<"Add = "<<a+b<<endl;
	cout<<"Sub = "<<a-b<<endl;
	cout<<"Mul = "<<a*b<<endl;
	div = a /(float)b;
	cout<<"div = "<<div<<endl;
	return 0;
}