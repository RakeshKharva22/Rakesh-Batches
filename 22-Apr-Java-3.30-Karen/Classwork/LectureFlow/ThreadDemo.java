/*
 * Thread : The smallest individual unit of your program is called Thread.
 * 			At a time only one thread can execute.
 * Java provides 3 Default priorities 
 * 
 * 1) Min_Priority  -> Value is 1.
 * 2) Norm _Priority -> Value is 5
 * 3) Max_Priority  -> Value is 10.
 * 
 * 
 * To Create a Thread you need to start it manually.
 * 
 * 2 ways : 1) Implements Runnable Interface.
 * 			2) Extends Thread Class.
 * 
 */


package com.gui;

class NewThread implements Runnable{

	Thread t;
	String tname;
	
	public NewThread(String tname) {
		this.tname= tname;
		t = new Thread(this,this.tname);
		t.start();
	}
	
	public void run() {
		for(int i  = 0;i< 5;i++)
		{
			System.out.println(t+ " : "+ i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		System.out.println("Child Thread Exiting");
	}
	
}


public class ThreadDemo {
	
	public static void main(String[] args) {
		new NewThread("One");
		new NewThread("Two");
		new NewThread("Three");
		Thread t  = Thread.currentThread();
		System.out.println(t);
		t.setName("My Thread");
		System.out.println("After Name Change"+t);
		t.setPriority(3);
		System.out.println("After Changing Priority : " + t);
		
		for(int i =0;i<5;i++)
		{
			System.out.println(t + " : "+ i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		System.out.println("Main Thread Exiting");
		
	}

}
