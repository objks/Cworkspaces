/*
재귀함수 : 함수내에서 다시 자기 자신을 호출하는 함수
	주의할 점 : 종료조건을 고려하여 언젠가는 함수가 종료되도록 하여야 함
	많이 사용되는 경우 : 큰 문제를 조그마한 문제로 계속 쪼개서 푸는 경우
	(divide and conquer)
*/

#include	<stdio.h>

void recursive(int n) {
	printf("recursive 함수가 호출됨\n");
	if(n >  0)
		recursive(n - 1);	// 내 함수내에서 자기 자신(recursive())을 다시 호출
}

// n!
// n = 1 1
// n > 1 n!= n * (n - 1)!
int factorial(int n) {	// 
	if (n == 1)	// 1
		return 1;
	else {
		return n * factorial(n - 1);	// 재귀함수
	}
}

int main_recursive(void) {
	/*
	printf("recursive 함수 실행 전에 출력\n");
	recursive(100);
	printf("recursive 함수 실행 후에 출력\n");
	*/
	printf("%d\n", factorial(6));	// 6!
	return 0;
}