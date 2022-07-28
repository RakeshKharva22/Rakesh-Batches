#include<stdio.h>
int main()
{
	int a;
	FILE *ptr;
	ptr = fopen("Jay.txt", "r");
	fscanf(ptr, "%d", &a);
	printf("The value of a is %d", a);

	return 0;
}
