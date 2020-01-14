/* 도전문제 1-1
도전 1. 10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을	작성해 보자. (서식문자를 활용)
%d : 정수형(10진수)
16진수 : %x
8진수 : %o
2진수 : 없고 -> 16진수 (4 bit)
*/

#include	<stdio.h>

int main_m11(void) {
	int num;

	printf("10진수 정수 : ");
	scanf("%d", &num);
	// 16진수 출력
	printf("0x%x\n", num);	// 16진수
	return 0;
}