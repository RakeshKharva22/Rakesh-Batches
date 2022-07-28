#include <iostream>
using namespace std;

int add (int a ,int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}
int main()
{
	cout<<"Integer :"<<add(10,20)<<endl;
	cout<<"Float :"<<add(5.7f,4.9f);
	return 0;
}