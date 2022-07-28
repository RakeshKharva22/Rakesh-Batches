#include<stdio.h>
int main()
{
	FILE *fptr;
	int number = 45;
	fptr = fopen("Jay.txt", "W");
	fprintf(fptr, "The number is %d", number);
	fclose(fptr);
	return 0;
}
