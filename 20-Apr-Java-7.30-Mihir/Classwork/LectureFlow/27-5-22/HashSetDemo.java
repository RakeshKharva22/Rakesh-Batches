/*HashSet :- it internally implements Set interface and extends abstract Set class.
 * 			- it internally uses HashTable.
 * 			- Hash Function decide's which elements to place at which position.
 * 			- Therefore Insertion order is not maintained.
 * 			- Does not allow Duplicate Values 		
 *  
 */

package com.mihir;

import java.util.HashSet;

public class HashSetDemo {

	public static void main(String[] args) {
		HashSet al = new HashSet();
		al.add(10);
		al.add(10.10);
		al.add("tops");
		al.add('t');
		al.add(true);
		al.add(null);
		al.add(10);
		System.out.println(al);
	}
}
