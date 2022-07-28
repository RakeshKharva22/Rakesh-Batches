 #include <stdio.h>
 
 void main()
 {
 	int choice ;
 	int a, b;
 	printf("\n<--------Choice Calculator-------->\n");
 	printf("\n1.Addititon\n2.Subtraction\n3.Multiply\n4.Division");
 	printf("\n\nEnter A and B ");
 	scanf("%d%d",&a,&b);
 	printf("\nA = %d, B = %d",a,b);
 	printf("\n\nEnter ur Choice ? ");
 	scanf("%d",&choice); 
 	
 	if(choice == 1)
 	{
 		printf("\nAddition is %d",(a + b));
	 }	 
	 else if(choice == 2)
	 {
	 	printf("\nSubtraction is %d",(a - b));
	 }
	 else if(choice == 3)
	 {
	 	printf("\nMultiplication is %d",(a * b));
	 }
	 else if(choice == 4s)
	 {
	 	printf("\nDivision is %.2f",(a /(float)b));
	 }
	 else 
	 {
	 	printf("Invalid Choice");
	 }
	 
 }
 