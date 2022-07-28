#include <iostream>
using namespace std;

template <typename riddhi>
riddhi div(riddhi a ,riddhi b)
{
	return a/(float)b;
}
int main()
{
	cout<<"Integer:"<<div<int>(40,20)<<endl;
	cout<<"Float :"<<div<float>(3.1f,7.4f)<<endl;
//	cout<<"string :"<<mul<string>("riddhi","kanzariya")<<endl;
	cout<<"double :"<<div<double>(20,50);
	return 0;
}