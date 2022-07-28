#include <stdio.h>

void main()
{
	char str[100], i;
	printf("Enter a string : ");
	scanf("%s", str);
	
	for(i=0;str[i]!='\0';++i);
	printf("Lenght of string is : %d", i);
}