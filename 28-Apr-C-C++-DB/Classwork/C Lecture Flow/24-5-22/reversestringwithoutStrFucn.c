#include<stdio.h>
#include<string.h>

void main()
{
	char str[50];
	printf("\nEnter the string ");
	gets(str);
	printf("\n Before reversing string: %s\n",str);
	
	//call reverse() function
	
	reverseString(str);
	printf("\n After reversing string: %s\n",str);
}


void reverseString (char *str1)
{
	int i, len,temp;
	len = strlen(str1);
	
	for(i = 0; i< len/2;i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i -1];
		str1[len -i-1] = temp;
	}
	
}