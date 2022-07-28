#include<stdio.h>
main(void)
{
                        int year;
                        printf("Entera year");
                        scanf("%d",&year);
                        
                  if((year%4==4)&&(year%400==0)||(year%100!==0)) 
                  
                 {
                   printf("%d is leap year",&year);}
                else 
                {
                         printf("%d is not a leap year".&year);               
                   }   
                       
                        
}