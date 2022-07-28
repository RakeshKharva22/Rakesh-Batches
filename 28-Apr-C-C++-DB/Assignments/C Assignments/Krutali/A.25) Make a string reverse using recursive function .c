#include <stdio.h>

void print_reverse(char*s);

void main()
{
	char s[100];
	printf("Enter any string : ");
	scanf("%s", &s);
	print_reverse(s);
	printf("\n");
	
}
void print_reverse(char*s)
{
	if(*s!='\0')
	{
	print_reverse(s+1);
	printf("%c", *s);
    }
}
