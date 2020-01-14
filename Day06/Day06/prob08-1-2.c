/*
문제 2. 두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그
	램을 작성해 보자. 단 무조건 큰 수에서 작은 수를 뺀 결과를
	출력해야 한다.
*/

#include	<stdio.h>

int main080102(void) {
	// 두 개의 정수를 입력
	// 변수 선언
	int a, b;
	// 입력
	printf("두 개의 정수 입력 : ");
	scanf("%d%d", &a, &b);
	// 두 수의 차를 계산
	int diff;
	if (a > b)
		diff = a - b;
	else
		diff = b - a;
	// 결과 출력
	printf("%d\n", diff);

	return 0;
}