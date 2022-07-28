#include <iostream>
using namespace std;

template <typename R>
R add(R a,R b)
{
     return a + b;	
}
int main()
{
	cout<<"Integer "<<add<int>(10,20)<<endl;
	cout<<"float "<<add<float>(2.5f,8.7f);
	return 0;
}