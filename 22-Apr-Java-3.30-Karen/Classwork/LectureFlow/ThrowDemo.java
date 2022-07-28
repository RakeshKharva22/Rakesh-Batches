import java.util.Scanner;

/*throw :  
 * 		throw is not a block like try/catch,it is a keyword.
 *
 *Rules to use throw
 *
 *1) throw is always defined inside a method body.
 *2)throw will work with the object of that class.
 *3)you cannot write any code after throw statement*
 *4) you can use throw only once. 
 * 
 * 
 */
public class ThrowDemo {

	public static void demo()
	{
		int x;
		Scanner sc = new Scanner(System.in);
		try {
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
			catch(Exception e)
			{
				System.out.println("Exception caught"+e);
				demo();
			}
		}
	
	public static void main(String[] args) {
		demo();
	}
}
