#include<stdio.h>

void main()
{
	int number = 1;
	for(int i=0;i<4;i++){
		for(int j=0; j<i+1;j++){
			printf(" %d",number);
			if(number==0){
				number=1;
			}	
			else{
				number=0;
			}
		}
		printf("\n");
	}
}