/* 관계 연산자
비교 연산자 : <, <=, >, >=, ==, !=
2개의 크기를 비교
*/

#include	<stdio.h>

int main_Relative(void) {
	int a = 20;

	if (a > 10)	// 비교 -> 참(0이 아닌 것, 1, 2, -1), 거짓(0)
		printf("10보다 큽니다.\n");
	else if (a <= 10)
		printf("10보다 작거나 같습니다.\n");

	printf("a > 10 : %d\n", a > 10);	// 20 > 10 -> 참 : 1(보통)
	printf("a < 10 : %d\n", a < 10);	// 20 < 10 -> 거짓 : 0
	return 0;
}