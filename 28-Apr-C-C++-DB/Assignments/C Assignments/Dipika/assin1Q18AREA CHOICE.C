#include<stdio.h>
main(void)
{
                        int  choice,b,h,Area,Cr,Cperimeter,CArea,recheight,recwidth,recperimeter,recarea;
                        char choice[10]
                        float;
                        printf("\n----------choice--------");
                        scanf("%d",choice);
                        printf("\n The breath of triangle is=");
                        scanf("%f",&b);
                        printf("\n The hight of triangle is=");
                        scanf("%f",&h);
                        
                        Area=0.5*b*h;
                        printf("\n The area of triangle is =%.2f",Area);
                        
                        
                       circle area 
                         
                       printf ("\nEnter radius of circle: ");
                        scanf("printf%f",&Cr);
                        CArea=3.14*Cr*Cr;
                        Cperimeter=2*3.14;
                        printf("\nEnter area of circle = %.2f\n",CArea);
                        scanf("%d",CArea);
                        printf("\nThe perimeter of circle =%.2f\n",Cperimeter);
                        
                      rectangle area
                      
                      printf("\nThe hight of rectangle: ");
                      scanf("%d",&recheight);
                      printf("\nThe width of rectangle: ");
                      scanf("%d",recwidth);
                      recarea=(recwidth * recheight);
                      recperimeter=2*(recheight+recwidth);
                      printf("\nThe perimeter of rectangle =%d",recperimeter);
                      printf("\n The area of rectangle=%d ",recarea);
                      scanf("%d",recarea);
                      
                      if(choice)
                      
                              case 1: 
                                      {
                                        printf("\nThe area of rectangle");
                                       break;
                                       }
                              case 2:
                                      {
                                          printf("\n The area of circle");
                                          break;                    
                                                      } 
                              case 3:
                              {
                                           printf("\n The area of triangle");
                                           break;
                                                    
                                                                     }                                       
                                              
                      }
                      
                      
                      
                      
                      
                        
                        
                        
                        
                        
}