import java.util.Scanner;

public class ArrayDemo {
	public static void main(String[] args) {
		int a[] = new int[5];
		int i, j;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Array Elements");
		
		//Accepting elements
		for(i = 0;i<a.length;i++) {
			System.out.println("Enter "+ (i+1)+" Element");
			a[i] = sc.nextInt();
		}
		
		System.out.println("\nArray Elements are:");
		//Displaying Elements
		for(i = 0;i<a.length;i++) {
			System.out.println("A["+i+"] = " + a[i]);
		}
		
		
		for(i = 0;i<a.length;i++) {
			
			for(j = i + 1;j < a.length; j++) {
				
				if(a[i] > a[j])
				{
					int temp;
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		
		
		System.out.println("\nArray Elements in Ascending Order are:");
		//Displaying Elements
		for(i = 0;i<a.length;i++) {
			System.out.println("A["+i+"] = " + a[i]);
		}
		
for(i = 0;i<a.length;i++) {
			
			for(j = i + 1;j < a.length; j++) {
				
				if(a[i] < a[j])
				{
					int temp;
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		
		
		System.out.println("\nArray Elements in Descending Order are:");
		//Displaying Elements
		for(i = 0;i<a.length;i++) {
			System.out.println("A["+i+"] = " + a[i]);
		}
		
		
				
	}

}
