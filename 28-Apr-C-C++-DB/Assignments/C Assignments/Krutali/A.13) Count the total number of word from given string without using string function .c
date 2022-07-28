#include <stdio.h>
#include <string.h>

void main()
{
	char str[100];
	int i, alphabets=0, digits=0, special=0;
	
	printf("\n Please enter any string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=48&&str[i]<=57)
		{
			digits++;
		}
		else if((str[i]>=65&&str[i]<=90) || (str[i]>=97&&str[i]<=122))
		{
			alphabets++;
		}
		else
		special++;
    }
	printf("\nNumber of alphabeths in this string = %d", alphabets);
	printf("\nNumber of digits in this string = %d", digits);
	printf("\nNumber of special characters in this string %d", special);
}