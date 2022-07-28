#include <iostream>
#include <fstream>
using namespace std;

class A 
{
	public:
		int a;
		
	void write()
	{
		ofstream riddhi;
		riddhi.open("s1.txt",ios::out);
		cout<<"Enter A :";
		cin>>a;
		riddhi<<a<<endl;
		riddhi.close();
	}
	
	void read()
	{
		ifstream gayatri; 
		gayatri.open("s1.txt",ios::in);
		cout<<"reading from file.";
		gayatri>>a;
		cout<<a<<endl;
		gayatri.close();	
	}
	
    
	
};
int main()
{ 
    A riddhi;
   riddhi.write();
   riddhi.read();
	return 0;
}