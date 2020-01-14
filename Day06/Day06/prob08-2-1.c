/*
문제 1. 구구단을 출력하되 짝수 단(2단, 4단, 6단, 8단)만 출력하
	도록 하자. 또한 2단은 2*2까지, 4단은 4*4까지, 6단은 6*6까지
	8단은 8*8까지 출력되도록 프로그램을 구현해 보자.
*/

#include	<stdio.h>

int main_080201(void) {
	int i, j;

	// 2~9단 반복
	for (i = 2; i < 10; i++) {	// i : 단
		// 홀수 단과 짝수 단을 구분
		if (i % 2 != 0)	// 홀수면 건너뜀
			continue;
		// n*1 ~ n*9 반복
		printf("%d단\n", i);
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %2d\n", i, j, i * j);
			if (j == i)	// j : n * j 반복문을 종료
				break;
		}
		printf("\n");
	}
	return 0;
}