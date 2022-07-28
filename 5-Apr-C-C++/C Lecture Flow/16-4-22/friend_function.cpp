/*
Friend function:
=> Using Friend function we can access private and protected members of a class. 



*/

#include<iostream>
using namespace std;

class Parin
{
	private:		
		string tv="Watching";	
	
	friend void Jainik(Parin r);	
		
};

void Jainik(Parin r)
		{
			cout<<r.tv<<" IPL at Parin's....!"<<endl;
		}
	


main()
{
	
	Parin p;
	Jainik(p);
	
	
}