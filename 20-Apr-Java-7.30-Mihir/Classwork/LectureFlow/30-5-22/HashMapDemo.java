/*
 * HashMap : internally uses HashSet.
 * 		
 * important : HashMap works with Key,Value Pair.
 * 			 : Key is unique.
 * 			 : You can access Value through Key.
 * 			 : One Key contains only one Value.
 * 
 * Iterator method only used for accessing single elements.
 * 
 * entrySet : This method will make one set of Key & Value-
 * 			  which it will consider as one variable.
 * 
 */

package com.mihir;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Set;

public class HashMapDemo {

	public static void main(String[] args) {		
		HashMap hm  = new HashMap();
		hm.put(1, "Ramesh"); 
		hm.put(2, "Suresh");
		hm.put(3, "Jayesh");
		hm.put(4, "Mahesh");
		hm.put(5, "Rajesh");
		hm.put(5, "Jai");
		System.out.println(hm);
		
		System.out.println(hm.get(3));
		System.out.println(hm.size());
		;
		System.out.println(hm.remove(3));
		System.out.println(hm.size());
		
		System.out.println(hm);
		
		Set set = hm.entrySet();
		Iterator itr = set.iterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		
	}
}
