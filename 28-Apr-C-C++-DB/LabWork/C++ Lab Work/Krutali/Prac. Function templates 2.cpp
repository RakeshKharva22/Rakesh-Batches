#include <iostream>
using namespace std;

template <typename K>
K add(K a, K b)
{
	return a+b;
}
int main()
{
	cout<<"Integer : "<<add<int>(15,30)<<endl;
	cout<<"Float : "<<add<float>(3.5,9.2)<<endl;
	cout<<"String : "<<add<string>("abc","jkl")<<endl;
	return 0;
}