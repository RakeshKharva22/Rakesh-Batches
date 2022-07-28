#include<stdio.h>
void main()
{
	char name[20];
	char gender[10],male;
	float age;
	double pa;
	int discount,disamount,netamount;
	
	printf("\n------------------------------------");
	printf("\n       ENTER CUSTOMER DETAILS");
	printf("\n------------------------------------\n");
	printf("\nEnter Customer Name             : ");
	scanf("%s",&name);
	printf("\nEnter Customer Gender           : ");
	scanf("%s",&gender);
	printf("\nEnter Customer Age              : ");
	scanf("%f",&age);
	printf("\nEnter Customer Purchase Ammount : ");
	scanf("%lf",&pa);
	
	if(pa>100000)
	{
		if(65<age)
		{
			if(gender == male)
			{
				disamount = (pa/10);
			  printf("\nDiscount = %d",disamount);
			}
			else
			{
				disamount = pa/20;
				printf("\nDiscount = %d",disamount);
			}
		}
		else
		{
			if(gender == male)
			{
				disamount = pa/5;
				printf("\nDiscount = %d",disamount);
			}
			else
			{
				disamount = pa/10;
				printf("\nDiscount = %d",disamount);
			}
		}
	}
	
	printf("\n------------------------------------");
	printf("\n       CUSTOMER DETAILS ARE");
	printf("\n------------------------------------\n");
	
	printf("\nName               : %s",name);
	printf("\nGender             : %s",gender);
	printf("\nAge                : %.2f",age);
	printf("\nDis Amount         : %d",disamount);
	printf("\nPurchase Amount    : %.2lf",pa);
	netamount = pa - disamount;
	printf("\nNet Amount         : %d",netamount);
	
	
	
	
	
	
	
	
	
	
}