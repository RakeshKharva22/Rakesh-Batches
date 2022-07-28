#include <iostream>

using namespace std;

int sub (int a, int b)
{
	return a-b;
}
int main()
{
	int a1, b1;
	cout<<"Enter any number : ";
	cin>>a1;
	cout<<"Enter any number : ";
	cin>>b1;
	cout<<"a1 = "<<a1<<"\tb1 = "<<b1<<"\nSubtraction is = "<<(a1-b1);
	return 0;
}
