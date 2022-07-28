#include<stdio.h>
main()
{
	char s1[20],s2[20];
	gets(s1);
	
	int i;
	
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i] = s1[i];
	}
	
	s2[i]='\0';
	puts(s2);
}
