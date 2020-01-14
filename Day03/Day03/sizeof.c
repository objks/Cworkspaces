/*
기본 데이터 타입 :
정수->기본 데이터 타입 int
char	1 byte(8 bit) -128~127(0)
short	2 byte(16 bit) xxx
int		4 byte(32 bit) xxx
long	4 byte(32 bit) xxx
long long 8 byte(64 bit) xxx
실수 : 오차가 발생할 수 있음 : 기본 데이터 타입 double
float	4 byte
double	8 byte (오차의 확율이 적다)
long double	8 byte
*/

#include	<stdio.h>

int main_sizeof(void) {
	// 데이터 타입의 크기 : sizeof() -> 메모리의 점유 크기
	printf("char의 크기 : %d\n", sizeof(char));
	printf("short의 크기 : %d\n", sizeof(short));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("long의 크기 : %d\n", sizeof(long));
	printf("long long의 크기 : %d\n", sizeof(long long));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("double의 크기 : %d\n", sizeof(double));
	printf("long double의 크기 : %d\n", sizeof(long double));

	printf("int* 의 크기 : %d\n", sizeof(int *));

	char c = 128;	// 손실 발생 (-128~127)-> 알고서 프로그램을 해야 한다.
	short s = 123;	// -32xxx~32xxx
	int num = 1234567;	// 최소~최대
	// 저장할 데이터의 크기를 예상해서 데이터 타입을 선정해야 함
	long long ll = 1234567890123;
	num = ll;
	float f1 = 0.1f;	// 0.1f: float 4 byte
	double d1 = 0.1;	// f를 생략하면 0.1 -> double (8 byte)
	return 0;
}