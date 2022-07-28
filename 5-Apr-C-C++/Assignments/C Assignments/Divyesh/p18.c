//Write a program to determine whether a character entered by the user is lowercase or not.

#include <stdio.h>

int main() {
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	
	//(97-122 = a-z) ASCII Value
	
	if(ch >= 97 && ch <= 122){
	    printf("Character is Lowercase Letters");
    }   
	else{
		printf("Character is Not Lowercase Letters");
	}
	
	return 0;
}
