#include<stdio.h>
main()
{
	char name[50];
	
	printf("Enter your name: ");
	//scanf("%s",&name);
	gets(name);
	
	//printf("%s",name);
	
	puts(name);
}