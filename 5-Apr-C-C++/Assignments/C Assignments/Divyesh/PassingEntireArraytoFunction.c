#include <stdio.h>

void display(int *arr, int limit);

void main()
{
	int marks[5] = {10, 20, 30,40, 50};
	display(marks, 5);
}

void display(int *arr, int limit)
{
	for(int i = 0; i < limit; i++){
		printf("%d\n", *(arr+i));
	}
	
}