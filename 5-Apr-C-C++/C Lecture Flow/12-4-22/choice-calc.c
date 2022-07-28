#include <stdio.h>

void main()
{
	char choice;
	int a = 10, b = 20, add, sub, mul;
	float div;
	printf("\nA=%d, B=%d",a,b);	
	printf("\n------Choice Calculator--------\n");
	printf("\n1.Add \n2.Sub \n3.Mul \n4.Div");	
	
	printf("\nEnter ur choice :\t");
	scanf("%d",&choice);
	if(choice > 0){
		if(choice == 1){
			add = a + b;		
			printf("\nAddition is %d",add);
		}else if(choice == 2){
			sub = a - b;		
			printf("\nSubtraction is %d",sub); 
		}else if(choice == 3){
			mul = a * b;		
			printf("\nMultiplication is %d",mul); 
		}else if(choice == 4){
			div = a /(float) b;		
			printf("\nDivision is %.2f",div); 
		}
	}else{
		printf("\nPlease Enter +ve No.");
	}
	
	
}