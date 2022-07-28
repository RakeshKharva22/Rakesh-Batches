/**
 * Generic : Its a Common Datatype.
 * 			: Mainly used for Type Safety.
 * 
 * 
 */

package com.gui;

public class GenericDemo {

	public static <E> void printArray(E[] inputArray)
	{
		for(E e : inputArray) {
			System.out.println("" + e);
		}
	}
	
	public static void main(String[] args) {
		Integer intArray[] = {10,24,23,47,52};
		System.out.println("Accepts Integer Value");
		printArray(intArray);
		
		System.out.println("Accepts Double Value");
		Double doubleArray[] = {1.1,2.2,3.3,4.4,5.3};
		printArray(doubleArray);
		
		System.out.println("Accepts Character Value");
		Character charArray[] = {'a','e','i','o','u'};
		printArray(charArray);
		
	}
}
