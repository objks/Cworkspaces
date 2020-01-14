/*
리터럴 상수 : 프로그램 중에 사용되는 숫자, 문자, 문자열
프로그램을 작성을 하고 컴파일을 하면 내용이 고정
*/

#include	<stdio.h>

int main_literal(void) {
	int num = 30;	// 프로그램의 일부이고, 실행파일의 어딘가에 저장되어 있음.
					// 변경 불가 -> 상수
	int sum = 20 + 40;	// 상수 : int 형 (4 byte) 크기

	printf("%d\n", sizeof(20));		// 4
	printf("%d\n", sizeof(3.4));	// 실수형 리터럴 상수 -> 기본 double 8 byte
	printf("%d\n", sizeof(3.4f));	// float (4 byte)
	return 0;
}