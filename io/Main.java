package io;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		// 입력받을 때 : Scanner
		System.out.print("입력 :");
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		
		// 출력할 때 : system.out.prinln()
		// 백준문제 풀이과정 :  I/O 처리가 느리다 -> 시간 초과
		// 입력할 때 : 빠르게 처리하는 방법
		System.out.print("정수 두개 입력 : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line = br.readLine();	// 한 줄씩 읽기

		String lines[] = line.split(" ");
		int a = Integer.parseInt(lines[0]);
		int b = Integer.parseInt(lines[1]);				
		
		// 출력할 때 : 빠르게 처리하는 방법
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		bw.write(a + " " + b + "\n");
		bw.flush();
	}

}
