package chap05;

import java.time.DayOfWeek;
import java.util.Calendar;
import java.util.Scanner;

public class EnumExam {

	private static final String DayOfWeek = null;
	private static final Enum<java.time.DayOfWeek> now = null;

	public static void main(String[] args) {
		Week now=Week.MONDAY;	// 객체
		// 시간
		Calendar cur = Calendar.getInstance();	// 현재시간
		int year = cur.get(Calendar.YEAR);
		System.out.println("년도 : "+year);
		int month = cur.get(Calendar.MONTH);	// 0~11로 나와서 1을 더해줌
		int date=cur.get(Calendar.DATE);
		System.out.println(year + "년 " + (month +1) +"월 " + date + "일");
		cur.add(Calendar.YEAR, 1);	// 2020/11/11
		cur.set(2020, 10, 11);	// 11 -> 10
		System.out.println("2020/11/11 : " + cur.get(Calendar.DAY_OF_WEEK));
		
		// Enum을 사용하는 예
		if(now == Week.MONDAY) {
			System.out.println("월요일 입니다.");
		} else if(now==Week.TUESDAY) {
			System.out.println("화요일 입니다.");
		}
		System.out.println(now);
		int diff=now.compareTo(Week.FRIDAY); // Week.MONDAY - Week.FRIDAY
		System.out.println(diff);
		
		// 문자열을 입력받아서 Enum 타입으로 변환 : "MONDAY" -> Week.MONDAY
		Scanner scanner = new Scanner(System.in);
//		String week =scanner.next();
//		Week w1=Week.valueOf(week);	//문자열 -> Enum 객체로 변환
		int num=12;
		String str=String.valueOf(num);	// int -> String
		System.out.println(str);
		String str1="13";
		int num1=Integer.valueOf(str1);	// String -> int(Integer)
		Week arr[] = Week.values();	// MONDAY~SUNDAY : 배열의 크기
		for(Week a : arr) {
			System.out.println(a);
		}
	}
	
}
