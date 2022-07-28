#include<stdio.h>
int main(void)

{
                int a,b,c;
                printf("Enter A: ");
                scanf("%d",&a);
                printf("Enter B: ");
                scanf("%d",&b);
                printf("Enter C: ");
                scanf("%d",&c);
                
                if(a>b)
                {
                                        printf("\nA is Greater");
                 else
                                        printf("\nB is Greater");
                }
                 if(c>a)
                {
                                        printf("\nC is Greater");
                  else                      
                                        printf("\nA is Greater");
                }
                 if(b>c)
                {
                                        printf("\nB is Greater");
                   else                     
                                        printf("\nC is Greater");
                }
}