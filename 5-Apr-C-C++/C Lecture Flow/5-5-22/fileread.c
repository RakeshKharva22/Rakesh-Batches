#include <stdio.h>

void main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("dhruv.h","r");
	
	if(fp == NULL)
	{
		printf("Cannot find a file");
		exit(1);
	}
	
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
		
		fclose(fp);
}