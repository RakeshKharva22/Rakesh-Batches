package com.mihir;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class ComparatorDemo implements Comparator<Employee>{
	
	int value;
	
	public int compare(Employee e1, Employee e2) {
		
		
		
		if(e1.getSalary() > e2.getSalary())
		{
			value = 1;
		}
		else if(e1.getSalary() < e2.getSalary())
		{
			value = -1;
		}
		else if(e1.getSalary() == e2.getSalary())
		{
			value = 0;
		}
		
		return value;
	}
	
		public static void main(String[] args) {
		
		ArrayList<Employee> list = new ArrayList<Employee>();
		
		Employee e1 = new Employee();
		e1.setEid(101);
		e1.setEname("Ramesh");
		e1.setSalary(20000);
		
		Employee e2 = new Employee();
		e2.setEid(102);
		e2.setEname("Rajesh");
		e2.setSalary(22000);
		
		Employee e3 = new Employee();
		e3.setEid(103);
		e3.setEname("Danesh");
		e3.setSalary(25000);
		
		Employee e4 = new Employee();
		e4.setEid(104);
		e4.setEname("Mamesh");
		e4.setSalary(12000);
		
		Employee e5 = new Employee();
		e5.setEid(107);
		e5.setEname("Jayesh");
		e5.setSalary(23000);
		
		list.add(e1);
		list.add(e2);
		list.add(e3);
		list.add(e4);
		list.add(e5);
		
		
		Collections.sort(list, new ComparatorDemo());
		
		for(Employee e : list)
		{
			System.out.println("\nEID : "+e.getEid()+"\nEname : "+e.getEname()+"\nSalary : "+ e.getSalary());
		}
			
	}

	

}
