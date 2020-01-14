package io;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		// �Է¹��� �� : Scanner
		System.out.print("�Է� :");
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		
		// ����� �� : system.out.prinln()
		// ���ع��� Ǯ�̰��� :  I/O ó���� ������ -> �ð� �ʰ�
		// �Է��� �� : ������ ó���ϴ� ���
		System.out.print("���� �ΰ� �Է� : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line = br.readLine();	// �� �پ� �б�

		String lines[] = line.split(" ");
		int a = Integer.parseInt(lines[0]);
		int b = Integer.parseInt(lines[1]);				
		
		// ����� �� : ������ ó���ϴ� ���
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		bw.write(a + " " + b + "\n");
		bw.flush();
	}

}
