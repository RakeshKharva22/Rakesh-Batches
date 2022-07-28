package com.mihir;

import java.io.File;

public class FileDemo {

	public static void main(String[] args) {
		File f = new File("mihir.txt");
		
		System.out.println(f.canRead());
		System.out.println(f.canWrite());
		System.out.println(f.getAbsolutePath());
		System.out.println(f.getFreeSpace());
		System.out.println(f.getName());
		System.out.println(f.isDirectory());
		System.out.println(f.isFile());
		System.out.println(f.length());
	}
}
