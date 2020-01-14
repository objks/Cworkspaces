/*
대입(=)과 산술(+, -, *, /, %)연산
*/

#include	<stdio.h>	// printf(출력), scanf(입력)

int main_Arith(void) {
	int a = 10;	// 대입 : 10을 변수 a에 대입(저장)
	int b = 2;	// 대입

	// 더하기 연산
	int sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);

	// 빼기
	int sub = a - b;
	printf("%d - %d = %d\n", a, b, sub);

	// 곱하기
	int mul = a * b;
	printf("%d * %d = %d\n", a, b, mul);

	// 나누기
	int div = a / b;
	printf("%d / %d = %d\n", a, b, div);

	// 나머지 구하기
	int rem = a % b;
	printf("%d %% %d = %d\n", a, b, rem);	// "%" 를 출력내용으로 하기 위해 %%를 사용해야 함


	// 복합 대입 연산자
	/*
	a = a + b; -> a += b;
	*/
	a += b;	// 10 + 2 = 12;
	printf("a = %d\n", a);

	a -= b;	// 12 - 2 = 10;
	printf("a = %d\n", a);

	a *= 2;	// 10 * 2 = 20;
	printf("a = %d\n", a);

	a /= 2;	// 20 / 2 = 10;
	printf("a = %d\n", a);

	a %= 2;	// 10 % 2 = 0
	printf("a = %d\n", a);

	return 0;
}