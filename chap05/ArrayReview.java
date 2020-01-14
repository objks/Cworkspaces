package chap05;

import java.util.Scanner;

public class ArrayReview {

	public static void main(String[] args) {
		// 1차원 배열
		int arr1[] = { 1,2,3,4};	// 배열의 크기가 4
		for(int i=0;i<arr1.length; i++) {
			System.out.print(arr1[i]);
		}
		System.out.println();
		
		int arr2[];	// 변수 선언 후 밑에 줄에 초기화
//		arr2 = {1,2,3,4,5};		// 선언과 함께 초기화를 같이 해줘야함. 안그럼 초기화 에러 발생
		arr2 = new int[5];		// new 생성자 -> 초기화가 0으로(default)
		int num=1;
		for(int i=0;i<arr2.length;i++) {
			arr2[i] = num++; 
		}
		for(int i=0;i<arr2.length;i++) {
			System.out.print(arr2[i] + " ");
		}
		System.out.println();
		
		
//		Scanner scanner = new Scanner(System.in);
		Scanner sc=new Scanner(System.in);
		System.out.println("배열의 크기 : ");
		int len=sc.nextInt();
		double darr[]=new double[len];		// 배열의 크기를 지정
		System.out.println("배열 darr의 크기 = " + darr.length);
		
		// 배열도 클래스(객체)
		int arr3[]=new int[5];
		for(int i=0;i<arr3.length;i++) {
			System.out.print(arr3[i] + " ");
		}
		System.out.println();
	}

}
