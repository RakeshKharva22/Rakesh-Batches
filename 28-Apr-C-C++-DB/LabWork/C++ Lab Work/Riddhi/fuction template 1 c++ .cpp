#include <iostream>
using namespace std;

template <typename R>
R add (R a ,R b)
{
	return a + b;
}

int main()
{
	cout<<"Integer :"<<add<int>(10,20)<<endl;
	cout<<"Float :"<<add<float>(5.7f,4.9f)<<endl;
  //	cout<<"string :"<<add<string>("riddhi","kanzariya")<<endl; 
	return 0;
}