/*
 * HashMap : implements Map interface.
 * 			 internally uses HashSet
 * 		   -> it works with Key,Value Pair.
 * 		   -> Key is Unique
 * 		   -> You can only access  Value through Key. 
 * 		   -> One Key contain only One Value.
 * 
 * 
 * 
 */

package com.gui;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Set;

public class HashMapDemo {

	public static void main(String[] args) {
		
		HashMap hm = new HashMap();
		hm.put(1, "Jack");
		hm.put(2, "Jill");
		hm.put(3, "John");
		hm.put(4, "Joe");
		hm.put(5, "Jane");
		//hm.put(5,"James");
		System.out.println(hm);
		
		System.out.println(hm.get(3));
		
		System.out.println(hm.remove(4));
		System.out.println(hm);
		System.out.println(hm.size());
		
		
		Set s = hm.entrySet();
		
		Iterator itr = s.iterator();
		
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		
		
	}
}
