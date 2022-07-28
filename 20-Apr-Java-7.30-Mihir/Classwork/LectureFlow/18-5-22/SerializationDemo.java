/* Serialization : To write the current status of an object into the file 
 * 				   is called Serialization.
 * 
 * Deserialization : To Read the current status of an object into the file 
 * 					is called Deserialization.
 * 
 * toString() : -  it belongs to String Class.
 * 				   it converts data into String
 * 				   It will get called automatically when object is printed.
 * 
 * 
 * 
 */


package com.mihir;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

class Employee implements Serializable{
	int eno;
	String ename;
	float salary;
	
	public Employee(int eno, String ename, float salary) {
		super();
		this.eno = eno;
		this.ename = ename;
		this.salary = salary;
	}
	
	public String toString() {
		
		return "ENo : " + eno +" Ename : " + ename + " Salary : "+ salary;
	}
	
}

public class SerializationDemo {

	public static void main(String[] args) throws Exception {
		
		Employee e1 = new Employee(101, "Mihir", 30000);
		Employee e2 = new Employee(102,"Jayesh",4000);
		
		FileOutputStream fos = new FileOutputStream("serilized.txt");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(e1);
		oos.writeObject(e2);
		System.out.println("File Written Successful.");
		
		FileInputStream fis = new FileInputStream("serilized.txt");
		ObjectInputStream ois = new ObjectInputStream(fis);
		
		Employee m1 = (Employee)ois.readObject();
		Employee r1 = (Employee)ois.readObject();
		ois.close();
		System.out.println(m1);
		System.out.println(r1);
		
	}
}
