package com.gui;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;

/*Collection : is a group of data.
 * 
 * -> One object can contain more than one object.  ex. data stored in DB.
 * ->We can store objects of different types.  like Structure in C Programming.
 * 
 * Java Collection provides you many interfaces 
 * 
 * 1) ArrayList
 * 2) HashSet
 * 3) HashMap
 * 4)Stack
 * 5) ListIterator ,etc.
 *  
 * ArrayList :- It internally uses Array.
 * 				It follows sequential data
 * 				It allows Duplicate values.
 * 				It is Dynamic.
 * ArrayList is a class , it internally implements List interface.
 * 
 * Iterator : is a interface belongs to java.util.
 *			  contains iterator method.
 *			  it  works top-bottom. 
 *
 *ListIterator : is an interface
 *				it works top-bottom and bottom-top.
 * 
 */


public class ArrayListDemo {
	
	public static void main(String[] args) {
		ArrayList al = new ArrayList();
		al.add(10);
		al.add(10.10);
		al.add("tops");
		al.add(true);
		al.add('t');
		al.add(null);
		al.add(10);
		System.out.println(al); 
		
		System.out.println(al.size()); 
		System.out.println(al.indexOf(null));
		System.out.println(al.isEmpty());
		System.out.println(al.lastIndexOf(10));
		System.out.println(al.remove(3));
		System.out.println(al);
		System.out.println(al.set(3,100));
		System.out.println(al);
		
		
		System.out.println("\nUsing Iterator");
		Iterator itr = al.iterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		
		System.out.println("\nUsing List Iterator");
		
		ListIterator litr = al.listIterator();
		
		while(litr.hasNext())
		{
			litr.set(litr.next()+"Tops");
			//System.out.println(litr.next() + " Tops");
		}
		litr = al.listIterator();
		while(litr.hasNext())
		{
			System.out.println(litr.next());
		}
		
		System.out.println("\nUsing List Iterator in Reverse order");
		
		while(litr.hasPrevious())
		{
			System.out.println(litr.previous());
		}
		
	}
}
