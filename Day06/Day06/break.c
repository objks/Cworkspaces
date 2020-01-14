/*
반복문의 생략(continue)과 탈출(break) : 어떤 조건을 만족하면
0~n(1씩 증가하면서 합을 구하는데 5000보다 작은 n?)
특정 조건을 판단하는게 어려운데 반복을 계속해야 하므로 while문 사용
*/

#include	<stdio.h>

int main_break(void) {
	int num = 0;	// 0 ~ n
	int sum = 0;	// 합

	while (1) {	// 무한 반복
		sum += num;
		if (sum > 5000) {	// 특정 조건을 만나면
			break;		// break를 감싸는 반복문을 종료-> 20
		}
		num++;
	}
	printf("합: %d\n", sum);
	printf("num: %d\n", num);
	return 0;
}
