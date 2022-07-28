#include<stdio.h>
int main()
{
	int phy, chem, math, hindi, comp;
	float per;
	
	printf("Enter the numbers of phy, chem, math, hindi, comp: \n");
	scanf("%d, %d, %d, %d, %d", &phy, &chem, &math, &hindi, &comp);
	
	per = (phy + chem + math + hindi + comp) / 5.0;
	
	printf("percentage of marks = %.2f\n", per);
	
	
	if(per>75)
	printf("Distinction");
	else if(per>60 && per<=75)
	printf("First Class");
	else if(per>50 && per<=60)
	printf("Second Class");
	else if(per>35 && per<=50)
	printf("Pass Class");
	else
	printf("Fail");
	
	return 0;
}
