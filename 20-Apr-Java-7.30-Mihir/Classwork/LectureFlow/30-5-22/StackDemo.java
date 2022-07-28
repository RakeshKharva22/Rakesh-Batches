/*
 * Stack :- stores data in LIFO order.
 * 			Insertion will be from top.
 * 			Deletion will be from bottom.
 * 
 * 
 */

package com.mihir;

import java.util.Stack;

public class StackDemo {

	public static void main(String[] args) {
		Stack st = new Stack();
		st.push(10);
		st.push(10.10);
		st.push("tops");
		st.push('t');
		st.push(null);
		st.push(true);
		st.push(10);
		System.out.println(st);
		
		
		System.out.println(st.pop());
		System.out.println(st.pop());
		System.out.println(st.pop());
		System.out.println(st.pop());
		System.out.println(st.pop());
		System.out.println(st.pop());
		System.out.println(st.pop());
		System.out.println(st.pop());
		
		
		
	}
}
