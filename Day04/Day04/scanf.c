/*
입력 : scanf 함수
%d : 정수(int)
%o : 8진수
%x : 16진수
%f : 실수(float)
%lf : double (8 byte)
%Lf : long double (8 byte)
%s : 문자열
%c : 한 문자
scanf 사용 시는 변수의 주소값(&num)을 매개변수에 넘겨준다.
*/

#pragma warning(disable:4996)	// scanf depreciated 방지 방법
#include	<stdio.h>

int main_scanf(void) {
	int num;
	printf("10진수 정수 입력 : ");
	scanf("%d", &num);
	printf("%d\t0%o\t0x%x\n", num, num, num);
	printf("8진수 정수 입력 : ");
	scanf("%o", &num);	// 8진수 : %o
	printf("%d\t0%o\t0x%x\n", num, num, num);
	printf("16진수 정수 입력 : ");
	scanf("%x", &num);
	printf("%d\t0%o\t0x%x\n", num, num, num);
	// 실수 입력
	double d1;
	float f1;
	printf("float 형태 입력 : ");
	scanf("%f", &f1);
	printf("%f\n", f1);
	printf("double 형태 입력 : ");
	scanf("%lf", &d1);
	printf("%f\n", d1);
	printf("지수 형태 입력 : ");
	scanf("%lf", &d1);
	printf("%f\n", d1);
}