#include<iostream>
using namespace std;
class Complex
{
	   int a,b;
    public:
    	void getvalue()
              {
                 cout<<"Enter the value of Complex Numbers a,b:";
                 cin>>a>>b;
              }
    	Complex operator+(Complex co)
    	{
    		Complex t;
    		t.a=a+co.a;
    		t.b = b+co.b;
    		return(t);
		}
		Complex operator-(Complex c)
		{
			Complex t;
			t.a=a-c.a;
			t.b=b-c.b;
			return (t);
		}
		void display()
		{
			cout<<a<<" + "<<b <<endl;
		}
};
int main()
{
	Complex obj1,obj2,res1,res2;
	
	obj1.getvalue();
	obj2.getvalue();
	
	cout<<"Display INput"<<endl;
	obj1.display();
	obj2.display();
	
	res1 = obj1+obj2;
	res2 =obj1-obj2;
	
	cout<<"Result"<<endl;
	res1.display();
	res2.display();
	
	
}
