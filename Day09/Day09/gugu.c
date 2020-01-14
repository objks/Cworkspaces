/*
구구단의 결과를 배열에 저장
2~9단
2*1~2*9
9*1~9*9
gugu[10][10] : 0, 1 메모리의 낭비가 있을 수 있지만, 크게 신경쓸 일이 아님
*/

#include	<stdio.h>

int main_gugu(void) {
	int gugu[10][10];	// 구구단 결과값을 저장

	printf("%p\n", gugu);	// gugu = &gugu[0][0] = &gug[0]
	for (int i = 2; i < 10; i++) {		// 행
		printf("%p\n", gugu[i]);	// gugu[i] : 행의 주소
		for (int j = 1; j < 10; j++) {	// 열
			gugu[i][j] = i * j;
		}
	}
	for (int i = 2; i < 10; i++) {
		printf("%d단\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, gugu[i][j]);
		}
		printf("\n");
	}
}