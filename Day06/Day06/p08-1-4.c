/*
삼항식
if(a>b)
	printf("%d\n", a - b);
else
	printf("%d\n", b - a);
->
(a > b) ? printf("%d\n", a - b) : printf("%d\n", b - a);
*/

#include	<stdio.h>

int main08_1_4(void) {
	// 두 개의 정수를 입력
	// 변수 선언
	int a, b;
	// 입력
	printf("두 개의 정수 입력 : ");
	scanf("%d%d", &a, &b);
	// 두 수의 차를 계산
	/*
	int diff;
	if (a > b)
		diff = a - b;
	else
		diff = b - a;
	// 결과 출력
	printf("%d\n", diff);
	*/

	// 삼항식
	(a > b) ? printf("%d\n", a - b) : printf("%d\n", b - a);

	return 0;
}

/*
// 시험 : 모든 경우를 확인
1. 첫번째 > 두번째
2. 첫번째 < 두번째
3. 첫번째 == 두번째
*/

/*
(조건식) ? 실행문1 : 실행문2;
(조건식1) ? (조건식2) ? 실행문1: 실행문2 : 실행문3;
*/