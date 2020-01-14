/*
문제 1. 1에서 100미만의 정수 중에서 7의 배수와 9의 배수를 출력
	하는 프로그램을 작성해 보자. 단 7의 배수이면서 동시에 9의
	배수인 정수는 한번만 출력해야 한다.
*/

#include	<stdio.h>

int main_prob_08_1_1(void) {
	// 반복문 : 1~100 7의 배수 인지? 9의 배수 7의 배수 이면서 9의 배수
	for (int i = 1; i < 100; i++) {	// 1~100까지 반복
		// 실행 i : 판단해야 할 수
		// 7의 배수? : i % 7 == 0
		if (i % 7 == 0) {	
			printf("%d\n", i);	// 7의 배수면 출력
		}
		// 7의 배수가 아니면 skip 되서 출력안함

		else if (i % 9 == 0) {
			/*
			if (i % 7 == 0)
				;
			else
			*/
				printf("%d\n", i);	// 9의 배수면 출력
		}
	}
	return 0;
}