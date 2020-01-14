/*
Register변수
CPU내에 존재하는 레지스터 중의 하나(1~2)를 사용.
따라서 실행 속도가 빠른 함수를 사용할 필요가 있을 때 사용
*/

#include	<stdio.h>

int accumulate(int n) {
	register int sum = 0;	// register 변수 : CPU내에 사용되는 레지스터를 이용
		// 자주 사용되는 함수에서 빠른 연산을 수행할 때
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main_register(void) {

	// 1~10까지의 합을 구한다.
	int result = accumulate(10);
	printf("결과 = %d\n", result);
	return 0;
}