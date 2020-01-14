/* 문제 1
두 수 입력
뺄셈과 곱셈 결과를 출력
*/

#include	<stdio.h>

int main_prob03_1_1(void) {
	// 두 수를 입력 받는다.
	// 변수 2개를 선언한다.
	int a, b;
	printf("두 개의 정수 : ");
	scanf("%d %d", &a, &b);

	// 뺄셈
	printf("%d - %d = %d\n", a, b, a - b);

	// 곱셈
	printf("%d * %d = %d\n", a, b, a * b);
	return 0;
}