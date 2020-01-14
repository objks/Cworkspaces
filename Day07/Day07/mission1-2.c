/*
도전 2. 프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구
	단을 출력하는 프로그램을 작성해 보자.
	예를 들어,	2, 5를 입력 받으면 2단~5단까지 출력
		6, 3을 입력 받으면 3단~6단까지 출력
*/

#include	<stdio.h>

void printGugu(int small, int large) {
	for (int i = small; i <= large; i++) {
		printf("%d단\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int main_m12(void) {
	int num1, num2;
	int tmp;

	printf("두 개의 정수 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {	// 6 3
		tmp = num1;
		num1 = num2;
		num2 = tmp;		// num1 : 작은 수, num2: 큰수
		printGugu(num2, num1);	// 구구단을 출력 함수 : 매개변수 (작은 수, 큰 수)
		/*
		// 3 ~ 6단
		for (int i = num2; i <= num1; i++) {
			printf("%d단\n", i);
			for (int j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
		*/
	}
	else {				// 2 5
		printGugu(num1, num2);	// 구구단을 출력 함수 : 매개변수 (작은 수, 큰 수)
		/*
		// 2 ~ 5단
		for (int i = num1; i <= num2; i++) {
			printf("%d단\n", i);
			for (int j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
		*/
	}
	// num1 < num2
	// 이중 for 문 실행

	for (int i = num1; i <= num2; i++) {
		printf("%d단\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	// 함수를 호출
	return 0;
}