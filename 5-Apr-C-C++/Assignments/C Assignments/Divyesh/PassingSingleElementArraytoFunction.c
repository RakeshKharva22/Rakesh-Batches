#include <stdio.h>
void display(int i);

void main()
{
int marks[5] = {10, 20, 30, 40, 50};
	for(int i = 0; i < 5; i++){
		display(marks[i]);
	}
}

void display(int n)
{	
	printf("The Value is %d\n",n);
}

