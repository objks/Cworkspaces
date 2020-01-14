/*
자동 형변환 : 대입과정에서 왼쪽과 오른쪽이 다를 경우 자동적으로 형변환이 이루어진다.
*/

#include	<stdio.h>

int main_casting(void) {
	// 정수 -> 실수
	int num = 10;
	double d1 = 20;	// 오른쪽은 int형인데 double형에 대입 -> 자동형변환
	printf("d1 = %f\n", d1);
	// 오차가 발생할 수 있다. 불가능하지 않다. 실수는 정수를 포함(표현할 수 있다)한다.
	// 실수 -> 정수
	int a = 3.14;	// 오른쪽 double (8 byte), int (4 byte) -> 소수점이하가 손실 발생
	printf("a = %d\n", a);
	int b = 5 / 2;	// 정수 / 정수 = 정수 5 / 2 = 2
	printf("5/2 = %d\n", 5 / 2);
	printf("b = %d\n", b);
	int c = (double)5 / 2;
	printf("(double)5/2 = %f\n", (double)5 / 2);
	printf("c=%d\n", c);
}