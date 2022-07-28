	#include <stdio.h>
	
	void main(){
		int i = 32, j = 63, c, d, e, f;
		i = ++j;
		j = ++i;
		c = j++;
		d = i--;
		e = c--;
		f = --e;
		
		printf("\nI =%d", i);
		printf("\nJ =%d", j);
		printf("\nC =%d", c);
		printf("\nD =%d", d);
		printf("\nE =%d", e);
		printf("\nF =%d", f);
		
	}
	
	
	
	
	