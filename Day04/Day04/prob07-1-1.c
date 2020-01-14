/*
문제 1)
프로그램 사용자로부터 양의 정수를 하나 입력 받아서,
그 수만큼 "Hello World!"를 출력하는 프로그램을 작성해보자.
*/

#include	<stdio.h>

int main_prob03_1_1(void) {
	int num;
	printf("양의 정수 : ");
	scanf("%d", &num);
	int i = 0;	// 반복문의 횟수
	while (i < num) {
		printf("Hello Wordld!\n");
		i++;
	}
	return 0;
}