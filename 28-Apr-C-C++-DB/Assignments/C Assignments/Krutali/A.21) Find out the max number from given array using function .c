#include <stdio.h>

int largenum(int arrdata[]);
int no;

void main()
{
	int arrdata[200], largeno;
	printf("Enter the element : ");
	scanf("%d", &no);
	printf("Enter %d elements : \n",no);
	for(int k=0;k<no;k++)
	{
		printf("Element %d : ", k);
		scanf("%d", &arrdata[k]);
	}
	largeno = largenum(arrdata);
	printf("The largest element : %d\n", largeno);
}
int largenum (int arrdata[])
{
	int k=1, largeno;
	largeno = arrdata[k];
	while (k<no)
	{
		if(largeno < arrdata[k])
		largeno = arrdata[k];
		k++;
	} 
	return largeno;
}