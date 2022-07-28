// String is a collection of characters.




#include <stdio.h>

void main()
{
	char name[10];
	printf("Enter Name : ");
	//scanf("%s",&name);
	gets(name);
	printf("Name : %s",name);
	//puts(name);
}