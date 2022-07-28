

/*
	1) Simple If :  if(condition)
					{
					Statement;
					}
					
	2) if/else :  if(condition)
				  {
				  statement;
				  }
				  else
				  {
				  statement;
				  }
				  
	3) Nested if/else :
	
	if(condition)
	{
		if(condition)
		{
		statement;
		}
		else
		{
		statement;
		}
	}
	else
	{
		if(condition)
		{
		statement;
		}
		else
		{
		statement;
		}
	} 
	
	4) Ladder if/else:
	
		if(condition)
		{
		statement;
		}
		else if(condition)
		{
		statement;
		}
		else if(condition)
		{
		statement;
		}
		else
		{
			statement
		}	  
				  
	 
*/




import java.util.Scanner;

public class IfConditionDemo {

	public static void main(String[] args) {
	
		int a, b, c ;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter A :");
		a = sc.nextInt();
		System.out.println("Enter B :");
		b = sc.nextInt();
		System.out.println("Enter C :");
		c = sc.nextInt();
		System.out.println("A = "+a+" B = "+b+" C = "+c);
		
		if(a>b) {
			if(a>c) {
				System.out.println("A is Greater");
			}else {
				System.out.println("C is Greater");
			}			
		}else {
			if(b>c) {
				System.out.println("B is Greater");
			}else {
				System.out.println("C is Greater");
			}
			
		}
		
		
		
	}
}
