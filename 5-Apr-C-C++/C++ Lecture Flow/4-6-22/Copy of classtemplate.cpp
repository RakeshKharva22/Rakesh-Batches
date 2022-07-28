/*
this means it belongs to the current class.
*/

#include<iostream>
using namespace std;

class Number{
	private:
		int Num;
		float Num2;
		string name;
	public:
		Number(int num)
		{
			Num = num;
		}
		Number(float num2)
		{
			Num2 = num2;
		}
		Number(string n)
		{
			name = n;
		}
		
	int getA()	
	{
		return Num;
	}
	
	float getB()	
	{
		return Num2;
	}
	
	string getName()	
	{
		return name;
	}
};

int main()
{
	Number n1(10);
	Number n2(58.8f);
	Number n3("abc");
	cout<<"Passing Integer Value A = "<<n1.getA()<<endl;
	cout<<"Passing Float Value A = "<<n2.getB()<<endl;
	cout<<"Passing Character Value Name = "<<n3.getName()<<endl;
	return 0;
}
