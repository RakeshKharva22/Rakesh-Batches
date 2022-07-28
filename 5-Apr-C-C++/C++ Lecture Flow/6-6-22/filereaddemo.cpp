#include <iostream>
#include <fstream>

using namespace std;

int main(){
	//Open a file in Read Mode
	char data[100];
	ifstream infile;
	
	//open a file in read mode.
	infile.open("dhruv.txt");
	cout<<"\nReading from the file..."<<endl;
	
	infile>>data;
	
	//write data at the screen.
	cout<<data<<endl;
	//again read the data from the file and display it.
	
	infile>>data;
	cin.ignore();
	cout<<data<<endl;
	//close the opened the file.
	
	infile.close();	
}