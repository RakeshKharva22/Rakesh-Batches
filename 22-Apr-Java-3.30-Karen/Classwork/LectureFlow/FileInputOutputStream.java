package com.gui;

import java.io.FileInputStream;
import java.io.FileOutputStream;

/*FileManagement : 
 * - default file is .txt
 * - .txt file is available in all the O.S e.g ios,linux,unix,windows and it helpswith database also. 
 *
 * FileInputStream : File Input : -> it shows o/p -> read
 * 
 * FileOutputStream :File output :-> it write's i/p -> write
 */


public class FileInputOutputStream {

	public static void main(String[] args) throws Exception{
		FileOutputStream fos = new FileOutputStream("tops1.txt");
		
		String s = "This is filemanagement demo using java";
		byte[] b = s.getBytes();
		fos.write(b);
		fos.flush();
		fos.close();
		System.out.println("File Wriiten Succesfully.");
		
		FileInputStream fis = new FileInputStream("tops1.txt");
		
		int i;
		while((i = fis.read())!=-1) {
			System.out.print((char)i);
		}
		
		fis.close();
		
		
		
		
	}
}
