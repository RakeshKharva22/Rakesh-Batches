
/**
 * Comparator & Comparable : are used for comparison.
 * 							 they both are interface.
 * 
 */

package com.gui;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Employee1{
	
	int eid;
	String ename;
	double salary;
	public int getEid() {
		return eid;
	}
	public void setEid(int eid) {
		this.eid = eid;
	}
	public String getEname() {
		return ename;
	}
	public void setEname(String ename) {
		this.ename = ename;
	}
	public double getSalary() {
		return salary;
	}
	public void setSalary(double salary) {
		this.salary = salary;
	}
		
	
}


public class ComparatorDemo implements Comparator<Employee1> {

	
	public int compare(Employee1 o1, Employee1 o2) {
		
		int value = 0;
		
		if(o1.getSalary() > o2.getSalary())
		{
			value = 1;
		}
		else if(o1.getSalary() < o2.getSalary())
		{
			value = -1;
		}
		else if(o1.getSalary() == o2.getSalary())
		{
			value = 0;
		}
		
		return value;
	}
	
	public static void main(String[] args) {
		
		ArrayList<Employee1> list = new ArrayList<Employee1>();
		
		Employee1 e1 = new Employee1();
		e1.setEid(1);
		e1.setEname("John");
		e1.setSalary(20000);
		
		Employee1 e2 = new Employee1();
		e2.setEid(2);
		e2.setEname("Jane");
		e2.setSalary(21000);
		
		Employee1 e3 = new Employee1();
		e3.setEid(3);
		e3.setEname("Jack");
		e3.setSalary(35000);
		
		Employee1 e4 = new Employee1();
		e4.setEid(4);
		e4.setEname("Jill");
		e4.setSalary(11000);
		
		Employee1 e5 = new Employee1();
		e5.setEid(5);
		e5.setEname("Joe");
		e5.setSalary(22000);
		
		
		list.add(e1);
		list.add(e2);
		list.add(e3);
		list.add(e4);
		list.add(e5);
		
		Collections.sort(list, new ComparatorDemo());  // inbuilt java class which contains static method i.e sort
		
		for(Employee1 e : list)
		{
			System.out.println("\nEID : "+ e.getEid() + "\nEname : "+ e.getEname() + "\nSalary : "+e.getSalary());
		}
		
		
	}
}


