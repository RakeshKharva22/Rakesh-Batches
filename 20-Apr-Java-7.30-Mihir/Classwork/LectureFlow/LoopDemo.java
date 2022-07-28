/*
 * Loop : 
 * 
 * 3 Types of Loop
 * 
 * 1) While Loop
 * 
 * Entry Controlled Loop
 * No Semicolon after while
 * If condition is false first then no Execution
 * 
 * while(condition)
 * {
 * 	body of loop
 * }
 * 
 * 2) do..while
 * 
 * Exit Controlled loop
 * semicolon after while
 * Atleast once it will execute even if the condition is false.
 * 
 */
public class LoopDemo {

	public static void main(String[] args) {
		int i, j, k;
		
//		while(i<=10) {
//			System.out.println("\n"+i);
//			i++;
//		}
		
//		do {
//			System.out.println("\n"+i);
//			++i;
//			System.out.println("\n"+i);
//		}while(i<=10);
		
for(i = 0 ;i < 10;i++) {
	
	for(k = 0;k<10-i;k++)
	{
		System.out.print(" ");
	}
	
	for(j = 0; j <= i; j++) {
		System.out.print("*");
	}
	System.out.println();
}
		
			
}

}
