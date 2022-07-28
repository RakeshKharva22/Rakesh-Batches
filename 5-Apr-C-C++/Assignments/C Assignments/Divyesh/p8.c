 //Write a program to find the simple Interest.
 
 #include<stdio.h>
 int main(){
 	float principle, time, rate, SI;
 	
 	printf("Enter value of Principle: ");
 	scanf("%f", &principle);
 	
 	printf("Enter value of rate: ");
 	scanf("%f", &rate);
 	
	printf("Enter value of time: ");
	scanf("%f", &time);
	
    SI = (principle*time*rate)/100;
	
	printf("Simple intrest SI: %0.2f", SI);
	return 0;
	
}