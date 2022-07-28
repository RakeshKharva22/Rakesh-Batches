import java.util.InputMismatchException;
import java.util.Scanner;

/*Exception : An abnormal situation that arises during the runtime of a program
 * 			  It will terminate the program when there is an exception is raised.
 * 
 * Types of Exception
 * 1) Checked Exception : it handles all compile time exception.
 * 2) Unchecked Exception : it handles all run time exception.
 * 
 *To handle exception java provides 5 keywords
 *
 *1)try   : it will be never be alone, it will have either catch/finally block
 *2)catch
 *3)throw
 *4)throws
 *5)finally
 * 
 * 
 */
public class ExceptionDemo {

	public static void main(String[] args) {
		System.out.println("Start Code");
		Scanner sc = new Scanner(System.in);
		int a, b, c;
		try {
			System.out.println("Enter A : ");
			a = sc.nextInt();
			System.out.println("Enter B : ");
			b = sc.nextInt();
			c = a / b;			
			System.out.println("Division is "+ c);
			int arr[] = {1,21,3};
			System.out.println(arr[5]);
		}
		catch(Exception e)
		{
			System.out.println("Exception caught");
		}
		finally{
			System.out.println("Finally Called");
		}
		System.out.println("End Code");
	}
}
