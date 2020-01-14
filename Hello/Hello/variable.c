#include	<stdio.h>

int main4(void) {
	// 5 + 6 = 11 -> 출력
	int num1 = 5;	// '=' : 대입연산자 (오른쪽에 있는 값을 왼쪽에 넣는다)
	int num2 = 6;	// 변수를 사용해서 중간 결과물을 저장한다. -> 목적: 나중에 재사용
	int sum = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, sum);

	printf("%d + %d = %d\n", 5, 6, 5+6);
	return 0;
}