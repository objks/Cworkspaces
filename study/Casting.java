package study;

/*
 * 타입 변환 : 자동타입변환, 강제타입변환
 * 자동타입변환 : 대입, 연산
 * 큰 데이터타입 = 작은 데이터 타입
 * 작은 데이터 타입 = 큰 데이터 타입 : 손실발생(감안 한다)
 * 연산 double d = int(-> double로 자동타입변환) + double
 * double d2 = int / int = int (소수점이 사라짐)
 * 			(double 강제 타입변환)int  / int( -> double 자동 타입변환) 
 * 문자열을 다룰때
 * */

public class Casting {
	public static void main(String[] args) {
		System.out.println("문자열" + 10);	// 10 -> "10" (자동타입변환)
		boolean flag=true;
		System.out.println("flag = " + flag);	// boolean -> 문자열
		byte byteValue = 10;
		byteValue = (byte)(byteValue + byteValue);
		short sValue = 10;
		sValue = (short)(sValue + sValue);
		// byte, short -> int 자동 타입변환이 이루어진다
		// 내부에서는 int로 동작
	}
}
