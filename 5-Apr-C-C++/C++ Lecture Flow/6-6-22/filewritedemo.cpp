#include <fstream>
#include <iostream>

using namespace std;

int main(){
	
	char data[100];
	//open a file in write mode
	ofstream outfile;
	outfile.open("dhruv.txt");
	
	cout<<"Writing to the file"<<endl;
	
	cout<<"\nEnter your name: ";
	cin.getline(data, 100);
	// write inputted data into the file.
	outfile<<data<<endl;
	
	cout<<"\nEnter your age:";
	cin>>data;
	cin.ignore();
	// again write inputted data intofile.
	outfile<<data<<endl;
	//close the append file;
	outfile.close();
	
}