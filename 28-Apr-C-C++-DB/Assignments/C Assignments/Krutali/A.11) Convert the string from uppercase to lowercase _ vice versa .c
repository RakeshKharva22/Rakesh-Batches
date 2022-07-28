#include <stdio.h>
#include <string.h>

void main()
{
    int i;
	char str[20];
	printf("Enter the string in uppercase : ");
    gets(str);
	
    for(i=0;str[i]!='\0';i++)
	str[i] = str[i] + 32;
		
	printf("\n\nConvert the string lowercase is : %s\n\n",str);
}