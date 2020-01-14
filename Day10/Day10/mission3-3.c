/*
난수 발생 방법
int rand();	0~최대수(RAND_MAX: 32767)사이의 수 중에 임의의 수를 발생
	short(16bit)양수 
void srand(unsigned int seed);
*/

#include	<stdio.h>
#include	<stdlib.h>	// rand()함수를 라이브러리
#include	<time.h>	// time()함수 : 현재시간 정보 (1970.1.1 0그 이후의 ms)

int main_m33(void) {
	printf("0~%d사이의 수 발생\n", RAND_MAX);
	srand(time(NULL));	// seed값으로 현재시간 값이 매개변수로 제공됨
	for (int i = 0; i < 5; i++)
		printf("%d\n", rand());

	rand() % 3;	// 나머지 연산을 사용하면 발생시킬 수 있는 경우의 수가 줄어든다.
	rand() % 6 + 1;	// 0~5 : 1~6
	return 0;
}