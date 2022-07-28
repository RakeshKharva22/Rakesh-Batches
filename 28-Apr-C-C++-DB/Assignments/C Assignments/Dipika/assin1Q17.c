#include<stdio.h>
int main(void)
{
                        int a,b,choice;
                        float div;
                        printf("\n-------- choice-------\n\n");
                        printf("Enter A: ");
                        scanf("%d",&a);
                        printf("Enter B: ");
                        scanf("%d",&b);
                        printf("A=%d,B=%d",a,b);
                        printf("\n------calculator Menu-------");
                        printf("\nAddition \nSubtraction \nMultiplication \nDivision");
                        printf("\n Please enter your choice-");
                        scanf("%d",&choice);
                        
                        switch(choice)
                        {
                            case 1:
                                    printf("\n Addition is %d",a+b);
                                    break;
                            case 2:        
                                    printf("\n Subtraction is %d",a-b);
                                    break;
                            case 3:
                                     printf("\n Multiplicationis %d",a*b);
                                     break;
                            case 4:
                                     printf("\n Division is %.2f",a/(float)b);
                                     break;
                            case 5:
                                     printf("\n Invalid choice");
                                     break;          
                        }
                        
}