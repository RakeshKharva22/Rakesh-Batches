package com.foundation;

/*
 * Loop : Repeating the same task again and again is called a Loop.
 * 
 * 3 Types :
 * 
 * 1)while
 * 2)do..while
 * 3) for
 * 
 * 1) While   :
 * 
 * 	syntax :  while(condition)
 * 			  {
 * 				//statement; 
 * 				incr/decr 
 *       	  }
 * 
 * -> It is called as Entry Controlled Loop.
 * -> Because it checks the condition first and then the statement .
 * -> No Semicolon after condition.
 * 
 * 2) do..while
 * 
 * syntax :	  do
 * 			  {
 * 				statement;
 * 				incr/decr;
 * 			  }		
 * 			  while(condition);
 * 		
 * -> It is called as Exit Controlled Loop.
 * -> Because the condition is checked afterwards,
 * -> It executes the Block, atleast once, even if the condition is False.
 * -> Semicolon after condition
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */



public class LoopDemo {

	public static void main(String[] args) {
		
		//int i=1;
		
		
		
//		while(i<=10)
//		{
//			System.out.println(i);
//			i++;
//		}
//		
//		do {
//			i++;
//			System.out.println(i);
//			
//		}while(i>=10);
		
		for(int i = 1;i<=10;i++)
		{
			System.out.println(i);
		}
		
		
		
	}
}











