/*
문제 2
0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, do-while문 기반으
로 구현해보자. 참고로 덧셈의 결과는 2550이 되어야 한다.
*/

#include	<stdio.h>

int main_prob07_3_1(void) {
	int i = 0;		// 반복문을 실행 0, 2, 4, 6, 8, ..., 100
	int sum = 0;

	do {
		i += 2;
		sum += i;
		
	} while (i < 100);
	// 출력
	printf("합: %d\n", sum);	// 문제에 대한 답을 올바르게 풀었는지 점검

	return 0;
}