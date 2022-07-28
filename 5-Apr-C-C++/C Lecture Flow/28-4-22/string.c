#include <stdio.h>

void main()
{
	char name[20];
	printf("Enter Name :");
	//scanf("%s",&name);
	gets(name);
	puts(name);
	printf("%s", name);
	
}
