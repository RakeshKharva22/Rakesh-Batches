#include <iostream>
using namespace std;

class Bookshop
{
	public :
	string author ,title;
	int price ;
	string publisher ;
	
	Bookshop(string author ,string title ,int price ,string publisher)
	{
		this -> author = author;
		this -> title = title;
		this -> price = price;
		this -> publisher = publisher;
	}
	
	void display ()
	{
		cout<<"\nauthor :"<<author;
		cout<<"\ntitle :"<<title;
		cout<<"\nprice :"<<price;
		cout<<"\npublisher :"<<publisher;
	}
};
int main()
{
	Bookshop b1("riddhi" ,"saraswatichandra" ,200 ,"R&M publication");
	b1.display();
	return 0;
}