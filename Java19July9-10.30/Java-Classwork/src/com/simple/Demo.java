/*
 * Execution process of Java
 * 1)public class
 * 2)static block
 * 3)main method.
 * 
 * 
 * 
 */

package com.simple;

public class Demo {

static {
	System.out.println("Static Block called");
}
	public static void main(String[] args) {
		System.out.println("Main method called");
	}
}
