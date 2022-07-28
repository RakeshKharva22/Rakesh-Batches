#include <stdio.h>
#include <string.h>

void main()
{
	//char name[10] = "KRUTALI";
	char fname[10] = "krutali";
	char lname[10] = "krutali";
	int value;
	
	//printf("String length is : %d",strlen(name));
	//printf("\nString reverse is : %s",strrev(name));
    //printf("%s", strcat(fname,lname));
	value = strcmp(fname,lname);
	printf("%d", value);
	
	//strcpy(lname,fname);
	//printf("%s", lname);
	//printf("\nLower case : %s",strlwr(fname));
	//printf("\nUpper case : %s",strupr(fname));
}