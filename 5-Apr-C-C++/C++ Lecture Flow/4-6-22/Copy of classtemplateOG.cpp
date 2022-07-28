/*
this means it belongs to the current class.
*/

#include<iostream>
using namespace std;

template<class T>
class Number{
	private:
		T var;
	public:
		Number(T v)
		{
			var = v;
		}
		
		T getVal()
		{
			return var;
		}
};

int main()
{
	Number <int>n1(10);
	cout<<"Passing Integer Value A = "<<n1.getVal()<<endl;
	Number <float>n2(10.5f);
	cout<<"Passing Float Value A = "<<n2.getVal()<<endl;
	Number <string>n3("dhruvam");
	cout<<"Passing String Name = "<<n3.getVal()<<endl;
	//cout<<"Passing Float Value A = "<<n2.getVal()<<endl;
	//cout<<"Passing Character Value Name = "<<n3.Val()<<endl;
	return 0;
}
