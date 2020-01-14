/*
중첩 while문
while(조건식) {	// 바깥
	while(조건식) {	// inner while

	}
}

구구단 : 2단 ~ 9단 (반복문) : 횟수 index : i
	해당 단 1~9 (반복문) 횟수 index : j
*/

#include	<stdio.h>

int main_nested(void) {
	int i, j;	// 횟수가 있는 반복문
	// 2~9단 반복문
	i = 2;	// 초기치
	while (i < 10 /* 조건식 */) {	// <= 9 (바깥 outer)
		printf("%d단\n", i);	// x 단
		// 해당 단의 1 ~9 반복
		j = 1;	// 초기치
		while (j < 10 /* 조건식 */) {	// 중첩 while (inner) 내부
			// 구구단을 출력
			printf("%d * %d = %2d\n", i, j, i * j);
			j++;	/* 증감식 */
		}
		printf("\n");	// 단과 단사이의 이쁘게 여유공간을 출력

		i++;	/* 증감식 */
	}
	return 0;
}