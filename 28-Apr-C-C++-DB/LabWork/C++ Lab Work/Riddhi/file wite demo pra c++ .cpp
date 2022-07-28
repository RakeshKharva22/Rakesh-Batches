#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a ;
	ofstream mahesh;
	mahesh.open("b1.txt",ios::out);
	cout<<"Enter A :";
	cin>>a;
	mahesh<<a<<endl;
	mahesh.close();
	
	ifstream gayatri;
	gayatri.open("b1.txt",ios::in);
	cout<<"reading from file.";
	gayatri>>a;
	cout<<a<<endl;
	gayatri.close();
	
	return 0;
}