/*
구구단 출력 : 2~9단, 매단 n*1~n*9
중첩 for문
*/

#include	<stdio.h>

int main_gugu(void) {
	// 중첩 반복문
	int i, j;
	int mul;	// 다시 사용하지 않으면 굳이 변수로 선언하지 않음

	for (i = 2; i < 10; i++) {	// 2~10 (i : 단)
		printf("%d단\n", i);
		for (j = 1; j < 10; j++) {	// j : n*1~n*9
			mul = i * j;
			printf("%d * %d = %2d\n", i, j, mul);
		}
		printf("\n");	// 친절하게 단과 단사이를 구분하기 위해
	}
	return 0;
}