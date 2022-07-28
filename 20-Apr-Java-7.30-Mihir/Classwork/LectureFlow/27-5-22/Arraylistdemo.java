/*
 * ArrayList : stores data of different types.
 * 			 -  is a class which imports java.util package.
 * 			 - It internally uses Array only.
 * 			 - Follows Sequential Data.
 * 			 - internally implements List interface & extends AbstractList class.
 * 			 - it is Dynamic.
 * 			 - Insertion order is maintained.
 * 			 - Allows Duplicate Values. 
 * 
 * Iterator is an interface belongs to java.util package.is accessed from top to bottom.
 * 		
 * 
 * ListIterator is an interface both top to bottom and bottom to top.
 * 
 */


package com.mihir;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;

public class Arraylistdemo {

	public static void main(String[] args) {
		ArrayList al = new ArrayList();
		al.add(10);
		al.add(10.10);
		al.add("tops");
		al.add('t');
		al.add(true);
		al.add(null);
		al.add(10);
		
		System.out.println(al);
		
		System.out.println(al.size());
		System.out.println(al.indexOf(10.10));
		System.out.println(al.isEmpty());
		System.out.println(al.lastIndexOf(10));
		System.out.println(al.remove(3));		
		al.set(3, 100);
		System.out.println(al);
		
		System.out.println("\nUsing Iterator\n");
		Iterator itr = al.iterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		
		System.out.println("\nUsing List Iterator Top to Bottom\n");
		ListIterator litr = al.listIterator();
		while(litr.hasNext())
		{
			System.out.println(litr.next()+" Tops");
		}
		
		System.out.println("\nUsing List Iterator Bottom to Top.\n");
		while(litr.hasPrevious())
		{
			System.out.println(litr.previous());
		}
		
		
		
	}
}
