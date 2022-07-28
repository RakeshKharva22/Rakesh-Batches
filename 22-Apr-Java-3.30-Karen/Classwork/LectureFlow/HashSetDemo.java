/*
 * HashSet : It implements Set interface & extends abstract Set Class.
 * 
 * 			- HashSet internally implements HashTable.
 * 		    - Element Insertion order is decided by HashTable.
 * 			- Insertion order is not maintain.
 * 			- No Duplicate Values*  
 * 
 * 
 * 
 */

package com.gui;

import java.util.HashSet;

public class HashSetDemo {
	
	public static void main(String[] args) {
	
		HashSet hs = new HashSet();
		hs.add(10);
		hs.add(10.10);
		hs.add("tops");
		hs.add('t');
		hs.add(null);
		hs.add(true);
		hs.add(10);
		System.out.println(hs);
	}

}
