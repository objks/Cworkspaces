/*
for 반복문
for(int i = 1;i <= 10;i++) {
	sum += i;
}
for(초기식(O);조건식(0);증감식(0)) {	// 조건식을 적지 않으면 참으로 인식
	실행문;				// 실행문이 한 줄일 경우 '{' '}'는 생략 가능
}
일정한 횟수를 반복 실행할 때
*/

#include	<stdio.h>

int main_for(void) {
	int i;
	int sum = 0;

	// 배열의 초기 주소가 0부터 시작 int i = 0;
	// 1~10
	for (i = 1; i <= 10; i++)
		sum += i;
	printf("합=%d\n", sum);
	return 0;
}