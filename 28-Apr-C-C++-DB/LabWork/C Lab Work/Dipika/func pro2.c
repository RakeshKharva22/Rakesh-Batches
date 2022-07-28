#include<stdio.h>
void addfun1();
void subfun2();
void mulfun3();
void divfun4();

void main()

{



                  int choice;
                  printf("\n-------choice calculator---------");
	
                        printf("\n1.addFun1 \n2.subFun2 \n3.mulfun3 \n4.divfun ");
	printf("\nEnter choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :addfun1();
                                                break;
				break;
		case 2 :subfun2();
                                                break;
				break;
		case 3 :mulfun3();
                                                break;
                                                
                                                case 4 :divfun4();
                                                break;
				break;
		default :printf("Invalid Input");
                                                }
                                                
}

void addfun1()                                       
{
     int a,b,add;
    
    
    printf("\n Enter A: ");
    scanf("%d",&a);
    printf("\n Enter B: ");
    scanf("%d",&b);
    add=a+b;
    printf("\n addition of %d",a+b);
    }


void subfun2()
{
            int a,b,sub;
            
            printf("\n Enter A:  ");
            scanf("%d",&a);
            printf("\n Enter B: ");
            scanf("%d",&b);
            sub=a-b;
            printf("\n subtraction of %d ",a-b);
                        
}

void mulfun3()
{
         int a,b,mul;
          
          printf("\n Enter A: ");
          scanf("%d",&a);
          printf("\n Enter B: ");
          scanf("%d",&b);
          mul=a*b;
          printf("\n multiplication of %d",a*b );               
}

void divfun4()
{
        int a,b;
        float div;
        printf("\n Enter A: ");
        scanf("%d",&a);
        printf("\n Enter B: ");
        scanf("%d",&b);
        div=a/(float)b;
        printf("\n division of %f",div);                
}

                                              
