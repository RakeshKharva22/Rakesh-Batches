#include<stdio.h>
main()
{
	char s[50]; //he
	
	int i,length=0;
	
	printf("Enter string : ");
	//scanf("%s",str);
	
	gets(s);
	
	for(i=0;i<s[i]!='\0';i++)
	{
		length++;//2
	}
	printf("%d ",length);
	
	
	
	
}