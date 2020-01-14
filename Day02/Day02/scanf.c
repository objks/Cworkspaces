/*
입력 방법 : 키보드로부터 데이터를 입력 (scanf 함수)
*/

#include	<stdio.h>

int main_scanf(void) {
	int a = 10;

	// 데이터 입력
	printf("정수 : ");
	scanf("%d", &a);	// %d : 정수(decimal), &a : 변수의 주소
	printf("a = %d\n", a);

	int b;
	printf("정수(10 20) : ");
	scanf("%d %d", &a, &b);
	printf("a = %d, b= %d\n", a, b);

	scanf("%d", &a);	// %d에 입력되는 값 1개 매핑이 된다.
	scanf("%d", &b);
	return 0;
}