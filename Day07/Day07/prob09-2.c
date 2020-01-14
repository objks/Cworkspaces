/* 문제 09-2 */
#include	<stdio.h>

//int total = 0;	// 전역 변수 -> static 변수를 사용

int AddToTotal(int num)
{
	static int total = 0;	// static 변수 ->처음에 호출될 때 한번만 초기화가 됨
	int var1 = 10;	// 함수가 호출될 때마다 실행됨

	total += num;
	return total;
}

int main_prob_09_2(void)
{
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("입력%d: ", i + 1);
		scanf("%d", &num);
		printf("누적: %d\n", AddToTotal(num));
	}
	return 0;
}