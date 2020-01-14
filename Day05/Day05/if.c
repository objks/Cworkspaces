/*
조건문 : 
1. if, else if, else 문
2. switch문

if(조건) {	// 조건 비교
	실행문;	// 조건을 만족하면 실행할 문장
}
조건을 만족하지 않으면 프로그램이 이쪽으로 내려온다.

여러 조건
scanf("%d", &n);
if(n > 3) {	// 조건문을 사용할 경우 언제나 있어야 함(필수)
	printf("3보다 큽니다.\n");
}
else if(n == 3) {		// 선택사항
	printf("3과 같습니다.\n");
}
else {	// < 3 (조건 생략) -> 그 밖에	// 선택사항
	printf("3보다 작습니다.\n");
}

if(n % 2 == 0) {	// 짝수
	printf("짝수\n");
}
else {	// 홀수
	printf("홀수\n");
}

if(n > 3) {	// 조건문을 사용할 경우 언제나 있어야 함(필수)
	printf("3보다 큽니다.\n");
}
else {	// 그 밖에
	printf("3보다 작거나 같습니다.\n");
}

// 1
if(n % 3 == 0 && n % 5 == 0) {	// 15의 배수
	// 15
}
else if(n % 3 == 0) {	// 15의 배수가 아님 -> 3의배수
	// 3, 6, 9, 12, 18
}


// 2
if(n % 3 == 0 && n % 5 == 0) {	// 15의 배수
	// 15
}
if(n % 3 == 0) {	// 3의배수
	// 3, 6, 9, 12, 15
}

중첩 for(;;) {
		for(;;) {
		}
	 }

	 if(age >= 10 && age < 20) {
		if(gender="남)
			printf("10대 남");
		else
			printf("10대 여");
	 }
	 else if(age >= 20 && age < 30) {
		if(gender="남)
			printf("20대 남");
		else
			printf("20대 여");
	 }
	 else {
		if(gender="남)
			printf("그외 남");
		else
			printf("그외 여");
	 }

삼항 연산자
val = (n % 2 == 0) ? "짝수" : "홀수";
// 조건을 만족하면 짝수 문장을 val에 대입
// 조건을 만족하지 않으면 홀수 문장을 val에 대입

if(n % 2 == 0)
	val = "짝수";
else
	val = "홀수";
*/

#include	<stdio.h>

int main_if(void) {
	int i;

	for (i = 0; i < 31; i++) {
		if (i % 3 == 0 && i % 5 == 0) {	// 15의 배수
			printf("%d(15)\n", i);
		}
		if (i % 3 == 0) {	// 3의배수
			printf("%d(3)\n", i);
		}
	}
	printf("\n");

	for (i = 0; i < 31; i++) {
		if (i % 3 == 0 && i % 5 == 0) {	// 15의 배수
			printf("%d(15)\n", i);
		}
		else if (i % 3 == 0) {	// 3의배수
			printf("%d(3)\n", i);
		}
	}
	printf("\n");
}