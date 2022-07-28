/*Stack : it stores data in LIFO e.g arranging the plates
 * 		Insertion will be from top
 * 		Deletion will be from bottom.
 *  * 
 * 
 */

package com.gui;

import java.util.Stack;

public class StackDemo {

	public static void main(String[] args) {
		Stack st = new Stack();
		System.out.println("Data inserted using push()\n");;
		st.push(10);
		st.push(10.10);
		st.push("tops");
		st.push(null);
		st.push('t');
		st.push("true");
		st.push(10);
		System.out.println(st);
		
		System.out.println("Data removed using pop()\n");
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
