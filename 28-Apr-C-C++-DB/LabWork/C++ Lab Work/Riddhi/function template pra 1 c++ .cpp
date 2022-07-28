#include <iostream>
using namespace std;

template <typename riddhi>
riddhi add(riddhi a ,riddhi b)
{
	return a + b;
}

int main()
{
	cout<<"Integer :"<<add<int>(20,40)<<endl;
	cout<<"Float :"<<add<float>(4.6f ,8.9f)<<endl;
	cout<<"string :"<<add<string>("riddhi","kanzariya")<<endl;
	cout<<"double :"<<add<double>(10,56);
	return 0;
}