/*
반복문 : 특정한 조건을 만족하면 여러 실행문을 반복해서 실행하고자 할 때 사용
while, do while, for 3가지
while(조건)
{
	실행문;	// 탭을 하나 들여써준다.
}
// 파이썬
for i in range(8):	// 반복문에 대한 중괄호가 없고, 4칸 이상 들여쓰기로 구분
	sum += i

C 언어의 for문
for(i = 0;i < 8;i++) {	// 일정한 횟수
	sum += i;
}

do {
	실행문;		// 실행문이 무조건 한번은 실행됨
}
while(조건식);	// 조건을 만족하면 또다시 실행문을 실행하고 
				// 조건을 만족하지 않으면 밑으로 내려간다.
*/

#include	<stdio.h>

int main_while(void) {
	int num = 0;
	while (num < 5) {
		printf("Hello World %d\n", num);
		num++;
	}
	return 0;
}