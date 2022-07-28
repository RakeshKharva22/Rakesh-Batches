#include<iostream>
using namespace std;

class staticDemo{
	public:
		 static int d1;
		
		staticDemo()
		{
			cout<<"Default Called"<<endl;
			d1++;
		}	
};

int staticDemo::d1 = 0;

int main()
{
	staticDemo s1,s2,s3;
	cout<<s3.d1;	
}