/*
 * Thread : The smallest individual unit of your program is called Thread.
 * 			It execute's one thread at a time.
 * 
 * Java gives us InBuilt class called as Thread.
 * 
 * Thread contains 3 arguments.
 * 
 * 1)Thread Name.
 * 2)Thread Priority.
 * 3)Thread Group.
 * 
 * 1st argument : By Default Main Thread.
 * 2nd argument : By Default Java provides 3 default priorities. i.e 3 static variable.
 * 
 * 				1st Priority -> Min_Priority -> Value is 1.
 * 				2nd Priority -> Norm_Priority -> Value is 5.
 * 				3rd Priority -> Max_Priority  -> Value is 10.
 * 
 * Generally most of the priorities are Normal.
 * 
 * Priorities are decided by Java.
 * 
 * 3rd Argument :  It is Group.
 * 				   By Default , it belongs to main group.
 * 
 * Generally all thread belongs to main thread.
 * 				
 * 
 * There are 2 ways to manage Thread
 * 
 * 1) Implements Runnable Interface -> provides abstraction
 * 
 * 2) Extends Thread Class -> No abstraction
 * 
 * 
 * 
 * 
 */


package com.mihir;

class NewThread implements Runnable{

	Thread t;
	String tname;
	
	public NewThread(String tname) {
		this.tname = tname;	
		t = new Thread(this,this.tname);
		t.start();
		
	}

	public void run() {
		
		try {
			for(int i = 0;i < 5; i++) {
				System.out.println(t + " : "+ i);		
		
				Thread.sleep(2000);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		System.out.println("Child Thread Exiting");
	}
	
}


public class ThreadDemo {

	public static void main(String[] args) {
		new NewThread("One");
		new NewThread("Two");
		new NewThread("Three");
		Thread t1 = Thread.currentThread();
		System.out.println(t1);
		t1.setName("My Thread");
		System.out.println("After Name Change : " + t1);
		//t1.setPriority(5);
		//System.out.println("After Priority Change :" + t1);
		
		try {
			for(int i = 0;i < 5; i++)
			{
				System.out.println(t1 + " : "+i);
				Thread.sleep(1000);
			}
		} catch (Exception e) {
			// TODO: handle exception
		}
		
	}
}
