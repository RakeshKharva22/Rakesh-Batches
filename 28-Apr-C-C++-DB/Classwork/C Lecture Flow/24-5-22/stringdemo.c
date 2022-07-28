// String -> is a collection of characters.

#include<stdio.h>


void main()
{
	char name[10];
	printf("\nEnter Name : ");
	
	gets(name);
	puts(name);
	printf("%d",strlen(name));
	//printf("\nName = %s",name);
}