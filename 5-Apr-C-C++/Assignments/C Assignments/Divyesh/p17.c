//

#include <stdio.h>

int main(){
	float per;
	printf("Enter Marks: ");
	scanf("%f", &per);
	
	if(per<=100 && per>=70){
		printf("Distinction\n");
	}
	else if(per>=60){
		printf("First Class\n");
    }
    else if(per>=50){
		printf("Second Class\n");
    } 
    else if(per>=35){
		printf("Pass Class\n");
    }
	else{
		printf("Fail\n");
    }
	else if(per>100){
		printf("Please Enter Valid Value\n");
    }   
	return 0;
}
