/*
반복문에서 어떤 조건일 때 나머지(continue 아래)를 생략하고 다음으로 계속 진행
0~20 3의 배수가 아닌 수를 출력
*/

#include	<stdio.h>

int main_cont(void) {
	int i;

	for (i = 0; i < 20; i++) {
		if (i % 3 == 0)	// 3의 배수는 건너뜀
			continue;	// 나를 감싼 반복문(for문)만 적용된다.
		// i가 3의 배수가 아닐 경우
		printf("%d\n", i);
	}
	return 0;
}
