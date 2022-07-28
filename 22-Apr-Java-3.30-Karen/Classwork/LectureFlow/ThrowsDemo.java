import java.util.InputMismatchException;
import java.util.Scanner;

/*throws : It is generally used in checked exception
 * 		   throws comes along with method signature
 * 			throws handle multiple exception.
 * 			throws directly work with class
 * 			throws will not work with try/catch
 * 
 */
public class ThrowsDemo {

	public static void demo() throws Exception
	{
		int x;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter X");
				x = sc.nextInt();
				
				if(x > 0)
				{
					System.out.println("Square of "+x+" is "+ (x*x));
				}
				else
				{
					throw new Exception("Please enter +ve value");
				}
		}			 
			
		

	public static void main(String[] args) {
		try {
			demo();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			
		}
	}
}
