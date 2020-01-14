/*
문제 1. 길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터
	총 5개의 정수를 입력 받자. 그리고 입력이 끝나면 다음의 내용
	을 출력하도록 예제를 작성해 보자.
	- 입력된 정수 중에서 최대값
	- 입력된 정수 중에서 최소값
	- 입력된 정수의 합

	1. 입력을 먼저 받고
	[힌트] scanf("%d", &arr[i]);
	2. 최대값과 최소값, 합을 계산
*/

#include	<stdio.h>

int main_aaa(void) {
	int arr[5];	// int형 배열 5개 선언
	int max;	// 초기치 X
	int min;	// 초기치 X
	int sum;	// 초기치 X

	for (int i = 0; i < 5; i++) {	// 데이터 5개 입력 arr[0] ~ arr[4]
		scanf("%d", &arr[i]);		// &num -> &arr[i]
	}

	// 데이터값이 어떤 값인지 모를 때
	// 처음 수 arr[0]
	max = min = sum = arr[0];	// 초기값
	// 나머지 arr[1] ~ arr[4]을 반복문으로 처리
	for (int i = 1; i < 5; i++) {
		// 새로운 최대값
		if (max < arr[i])
			max = arr[i];

		// 새로운 최소값
		if (min > arr[i])
			min = arr[i];

		// 합
		sum += arr[i];
	}
	printf("최대값=%d, 최소값=%d, 합=%d\n", max, min, sum);
	return 0;
}