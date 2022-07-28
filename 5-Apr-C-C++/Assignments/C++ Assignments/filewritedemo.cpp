#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	char data[100]
	
	ofstream outfile;
	outfile.open("chandrakant.txt");
	
	cout<<"Writing to the file"<<endl;
	
	cout<<"\nEnter your name: ";
	cin.getline(data, 100);
	
	outfile<<data<<endl;
	
	cout<<"\nEnter your afe: ";
	cin>>data;
	cin.ignore();
	
	outfile<<data<<endl;
	
	outfile.close();
	
	
	
}