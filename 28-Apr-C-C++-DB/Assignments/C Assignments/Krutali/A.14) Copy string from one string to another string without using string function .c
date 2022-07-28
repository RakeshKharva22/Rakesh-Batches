#include <stdio.h>
#include <string.h>

void main()
{
	char str[100], copystr[100];
	int i;
	
	printf("Please enter any string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		copystr[i] = str[i];
	}
	copystr[i] = '\0';
	
	printf("\nString thatwe copied into copystr = %s",copystr);
	printf("\n\nTotal number of characters that we copied = %d", i);
}