#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}
float add(float a, float b)
{
	return a+b;
}
int main()
{
	cout<<"Integer Addition is : "<<add(10,20)<<endl;
	cout<<"Float Addition is : "<<add(3.5f,5.2f);
	return 0;
}