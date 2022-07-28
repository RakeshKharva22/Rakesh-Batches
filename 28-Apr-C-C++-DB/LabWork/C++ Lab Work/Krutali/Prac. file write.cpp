#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char data[100];
	ofstream s1;
	s1.open("krutali.txt", ios::out);
	cout<<"Writing to the file "<<endl;
	cout<<"Enter your name : ";
	cin.getline(data,100);
	s1<<data<<endl;
	cout<<"Enter your age : ";
	cin>>data;
	s1<<data<<endl;
	s1.close();
	
	ifstream infile;
	infile.open("krutali.txt", ios::in);
	cout<<"Reading from the file "<<endl;
	infile>>data;
	cout<<data<<endl;
	infile>>data;
	cout<<data<<endl;
	infile.close();
	return 0;
}