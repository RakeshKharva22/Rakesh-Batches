//Create a string firstName & lastName to store details of user & primt all the characters using a loop.

#include<stdio.h>

void printString(char arr[]);
int main(){
	char firstName[] = "Divyesh";
	char lastName[] = "Sathwara";
	
	printString(firstName);
	printString(lastName); 

	return 0;
}

void printString(char arr[]){
	for(int i=0; arr[i] != 0; i++){
		printf("%c", arr[i]);		
	}
	printf("\n");
}