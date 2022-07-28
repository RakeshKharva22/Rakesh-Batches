#include <iostream>
using namespace std;

class Number
{
	private :
		int num1 ,num2;
		friend int max(Number);
		
	public :
		void accept()
		{
			cout<<"Enter no 1 :"<<endl;
			cin>>num1;
			cout<<"Enter no 2 :"<<endl;
			cin>>num2;
		}

};

int max (Number n1)
{
	if(n1.num1>n1.num2)
	{
		cout<<"Number 1 is greater "<<endl;
	}
	else
	{
		cout<<"Number 2 is greater "<<endl;
	}
}
int main()
{
	Number n1;
	n1.accept();
	max(n1);
	return 0;
}