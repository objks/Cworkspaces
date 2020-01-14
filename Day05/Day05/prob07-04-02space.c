/*
		* 스페이스의 수: 4번	i=0 5-1-i
	  0 *				 3		i=1
	0 0 *				 2		i=2
  0 0 0 *				 1		i=3
0 0 0 0 *				 0		i=4


*/

#include	<stdio.h>

int main_space(void) {
	// 반복문
	int i, j;

	for (i = 0; i < 5; i++) {
		// 스페이스 출력 : 5-1-i번	-> 반복문
		for (j = 0; j < 5 - 1 - i; j++) {
			printf("  ");	// ' ' + ' '
		}
		// 0을 출력      : i번		-> 반복문
		for (j = 0; j < i; j++) {
			printf("0 ");
		}
		// * 출력
		printf("*\n");
	}
	return 0;
}