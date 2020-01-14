/*
문제 2. 프로그램 사용자로부터 두 개의 실수를 입력 받아서
	double형 변수에 저장하자. 그리고 두 수의 사칙연산 결과를
	출력하자. (힌트) %f(float), %lf(double)
	출력할 때 : %f(float, double)
*/

#include	<stdio.h>

int main_prob05_1_2(void) {
	double d1, d2;	// 사칙연산을 위한 데이터 입력받을 변수 선언
	scanf("%lf %lf", &d1, &d2);	// call-by-reference : 매개변수에 주소값을 입력 &d1
	// 사칙연산
	printf("%f + %f = %f\n", d1, d2, d1 + d2);
	printf("%f - %f = %f\n", d1, d2, d1 - d2);
	printf("%f * %f = %f\n", d1, d2, d1 * d2);
	printf("%f / %f = %f\n", d1, d2, d1 / d2);
	return 0;
}