/*File Output : To write data into file.
 * 
 * File Input : To Read data from file.
 * 
 * 
 */

package com.gui;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;

public class FileOutputInputStreamDemo {
	
	public static void main(String[] args) throws Exception {
		FileOutputStream fos = new FileOutputStream("mihir.txt");
		String str = "This is File Output/Input Stream Demo using Java";
		byte [] b = str.getBytes();
		fos.write(b);
		fos.flush();
		fos.close();
		System.out.println("File written successfully.");
		
		FileInputStream fis = new FileInputStream("mihir.txt");
		int i;
		while((i = fis.read())!=-1)
		{
			System.out.print((char)i);
		}
		fis.close();
		System.out.println("\nFile Read successfully.");
		
	}

}
