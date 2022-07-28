#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a;
	ofstream riddhi;
	riddhi.open("m1.txt",ios::out);
	cout<<"Enter A:";
	cin>>a;
	riddhi<<a<<endl;
	riddhi.close();
	
	ifstream gayatri;
	gayatri.open("m1.txt",ios::in);
	cout<<"reading from file.";
	gayatri>>a;
	cout<<a<<endl;
	gayatri.close();
	return 0;
}