/*
2. 프로그램 사용자로부터 세 개의 정수를 순서대로 입력 받은
   후에, 다음 연산의 결과를 출력하는 프로그램을 작성하세요.
   num1 * num2 + num3
*/

#include	<stdio.h>

int main_prob03_1_2(void) {
	int num1, num2, num3;

	printf("3개의 정수 : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("%d * %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);
	return 0;
}