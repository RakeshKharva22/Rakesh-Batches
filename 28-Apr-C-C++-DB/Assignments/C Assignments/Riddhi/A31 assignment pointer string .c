#include <stdio.h>

void main()
{
	char ii[30] ,jj[30] ,*a ,*b;
	printf("\nEnter a first string :");
	gets(ii);
	printf("\nEnter asecond string :");
	gets(jj);
	a = ii;
	b = jj;
	while(*a)
	{
		a++;
	}
	while(*b)
	{
		*a = *b;
		b++;
		a++;
	}
	*a= '\0';
	printf("\n The string after concatenation is :%s",ii);
}