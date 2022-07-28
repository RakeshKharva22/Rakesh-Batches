import java.util.Scanner;

public class ArrayDemo {

	public static void main(String[] args) {
		
		int a[] = new int[5];
		int i, j, temp;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Array Elements");
		
		for(i = 0; i < a.length;i++)
		{
			System.out.println("Enter "+(i +1)+" Element :");
			a[i] = sc.nextInt();
		}
		System.out.println("Array Elements are");
		for(i = 0; i < a.length;i++)
		{
			System.out.println("A["+i+"]= "+a[i]);
		}
		
		//Ascending
		
		for(i = 0;i < a.length; i++)
		{
			for(j = i+1; j<a.length; j++) {
				
				if(a[i] > a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		
		System.out.println("Array Elements in Ascending Order : ");
		for(i = 0; i < a.length;i++)
		{
			System.out.println("A["+i+"]= "+a[i]);
		}
		
		//Descending
		
		for(i = 0;i < a.length; i++)
		{
			for(j = i+1; j<a.length; j++) {
				
				if(a[i] < a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		
		System.out.println("Array Elements in Descending Order : ");
		for(i = 0; i < a.length;i++)
		{
			System.out.println("A["+i+"]= "+a[i]);
		}
		
	}
}
