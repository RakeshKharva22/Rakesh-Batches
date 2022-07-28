/*
 * Generic : it means providing Common datatype.
 * 			 provides Type Safety.
 * 
 */

package com.mihir;

public class GenericDemo {
	
	
	public static <E> void printArray(E[] inputArray)
	{
		for(E e : inputArray)
		{
			System.out.println(" " + e);
		}
		
	}
	
	public static void main(String[] args) {
		
		Integer intArray[] = {10,20,30,40,50};
		printArray(intArray);
		Double doubleArray[] = {10.1,20.2,30.3,40.4,50.5};
		printArray(doubleArray);
		Character charArray[] = {'a','e','i','o','u'};
		printArray(charArray);
		
	}

}
