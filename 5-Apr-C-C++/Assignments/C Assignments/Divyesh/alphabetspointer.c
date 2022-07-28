//write a program in c to print all the letter in english using a pointer

#include<stdio.h>

int main(){
	char alph[27];
	int x;
	char *ptr;
	printf("Pointer: Print all the alphabets:\n");
	printf("---------------------------------\n");
	ptr = alph;
	
	for(x=0; x<26; x++){
		*ptr=x+'A';
		ptr++;
	}
	ptr = alph;
	
	printf(" The alphabets are : \n");
	for(x=0; x<26; x++){
		printf(" %c ", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}
