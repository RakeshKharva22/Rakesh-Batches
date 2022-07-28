package com.mihir;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileWriterReader {
	
	public static void main(String[] args) throws IOException {
		FileWriter fw = new FileWriter("tops1.txt");
		String s = "This is File Writer/Reader Demo using Java.";
		fw.write(s);
		fw.flush();
		fw.close();
		System.out.println("File Written successfully");
		
		FileReader fr = new FileReader("tops1.txt");
		
		int i;
		
		while((i=fr.read())!=-1)
		{
			System.out.print((char)i);
		}
		
		
		System.out.println("\nFile Reading is successful");
	}
}
