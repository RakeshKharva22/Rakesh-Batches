#include <iostream>
using namespace std;

class BookShop{
	private:
		char Author_name[20];
		char Title_Name[20];
		int Price;
		char Name_publisher[20];
	public:
		BookShop(char *author_name, char *title_name, int price, char *publisher_name)
		{
			strcpy(Author_name,author_name);
			strcpy(Title_Name,title_name);
			Price = price;
			strcpy(Name_publisher,publisher_name); 
		} 
		void Title();
		void Display(); 
};
void BookShop :: Title()
{
	char title;
	cout<<"\nEnter book title : ";
	cin>>title;
}
void BookShop :: Display()
{
	cout<<"\n\n-*-*-*-Display details-*-*-*-";
	cout<<"\n\nBook Price : "<<Price;
}
int main()
{
		char Author_name[20];
		char Title_Name[20];
		int Price;
		char Name_publisher[20];
	
	cout<<"-*-*-*-Enter Details-*-*-*-";
	cout<<"\n\nEnter name of author : ";
	cin>>Author_name;
	cout<<"\nEnter publishers name : ";
	cin>>Name_publisher;
	cout<<"\nEnter book price : ";
	cin>>Price;
	
	BookShop k(Author_name, Title_Name, Price, Name_publisher);
	k.Title();
	k.Display();
	return 0;
}