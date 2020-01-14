/*
문제 2
아래의 출력을 보이는 프로그램을 작성해보자.
* i=0
0 * i=1
0 0 *
0 0 0 *
0 0 0 0 *
참고로 5행에 걸쳐서 출력이 이루어지고, 행이 더해질 때마다 0문자의 수가 증가한다는 특징을
기반으로 while문의 중첩을 구성하면 된다.
*/

#include	<stdio.h>

int main_prob07_2_2(void) {
	int i, j;
	i = 0;
	while (i < 5) {	// i 0~4
		j = 0;
		while (j++ < i) {	// j : 0을 출력하는 횟수
			printf("0 ");
		}
		printf("*\n");
		i++;	// i의 증가 위치
	}
	return 0;
}