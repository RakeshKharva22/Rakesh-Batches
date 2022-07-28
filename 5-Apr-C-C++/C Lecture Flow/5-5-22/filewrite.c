#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("writedemo1.txt","w");
	
	if(fp == NULL)
	{
		printf("Cannot Open a file");
		exit(1);
	}
	
	while((ch=getchar())!='\n')
		fputc(ch,fp);
		fclose(fp);
	
	
}