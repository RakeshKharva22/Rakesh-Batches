

/*  Increment / Decrement Operator
 * 
		j = ++i;
		System.out.println("I =" + i); // 11
		System.out.println("J =" + j); // 11
		
		j = i++; 
		System.out.println("I =" + i);  // 12
		System.out.println("J =" + j);  // 11
		
		j = --i;
		System.out.println("I =" + i); // 11
		System.out.println("J =" + j); // 11
		j = i--;
		System.out.println("I =" + i); //10
		System.out.println("J =" + j); //11
		*/

public class LoopDemo {

	public static void main(String[] args) {
		int i =1, sum = 0;
		/*
		 * while(i <= 10) { System.out.println(i); ++i; }
		 */
		
//		do {
//			System.out.println(i);
//			++i;
//		}while(i >= 10);
		
		
		for(i =1; i <=10; i++)
		{
			System.out.println(i);
			sum = sum + i;
		}
		System.out.println("\nSum is "+sum);
			
		
	}
}
