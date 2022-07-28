#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
	ofstream outfile;
	outfile.open("a1.txt", ios::out);
	cout<<"Enter A = ";
	cin>>a;
	outfile<<a<<endl;
	outfile.close();
	
	ifstream infile;
	infile.open("a1.txt", ios::in);
	cout<<"Reading from file "<<endl;
	infile>>a;
	cout<<a<<endl;
	infile.close();

	return 0;
}