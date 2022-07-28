#include <stdio.h>
#include <string.h>

void main()
{
	char name[10] = "jack";
	char fname[10] ="riddhi";
	char lname[10] ="kanzariya";
	int value;
	//printf("string length is %d",strlen(name));
	//printf("\nstring reverse is %s",strrev(name));
	//printf("%s",strcat(fname,lname));
	//value = strcmp(fname,lname);
	//printf("%d",value);
	
	//strcpy(lname,fname);
	//printf("%s",lname);
	printf("\n lower case : %s",strlwr(fname));
	printf("\n upper case : %s",strupr(fname));
}