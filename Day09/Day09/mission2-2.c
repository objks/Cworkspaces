/*
10진수 정수 입력받은 후 2진수로 출력
12 -> 1100
*/

#include	<stdio.h>

void convertToBinary(int n) {	// 매개변수는 아무렇게나 작명
	// 2로 나누어서 나머지를 계속 저장을 해야 함 -> 배열에 저장
	int bin[100];	// 배열의 크기는 몇개인지 모르지만 크게 잡는다.

	int i;	// for문 다음에 i를 계속 사용해야 함. 그래서 for문 앞에 변수 i를 선언
	for (i = 0; n > 0; i++) {	// 12->0, 6->0, 3->1, 1->1(i=3)
		bin[i] = n % 2;	// 1. 나머지를 배열에 저장
		n /= 2;			// 2. 
	}
	// i=4
	// 2진수로 출력 : 3~0
	for (i--; i >= 0; i--) {
		printf("%d", bin[i]);
	}
	printf("\n");
}

int main_m22(void) {
	int num;

	printf("10진수 정수 입력: ");
	scanf("%d", &num);	// 주소 : call-by-reference
	convertToBinary(num);	// 10진수 -> 2진수 출력
	return 0;
}