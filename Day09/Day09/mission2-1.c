/*
1. 배열 선언
int arr[10];

*/

#include	<stdio.h>

void odd(int arr[], int len) {	// 배열과 배열의 길이
	// 10개의 데이터에 대하여 홀수 인지? 짝수인지? 반복
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0)	// 짝수
			// 출력
			printf("%d ", arr[i]);
	}
	printf("\n");
}

void even(int len, int arr[]) {	// 배열과 배열의 길이
	// 10개의 데이터에 대하여 홀수 인지? 짝수인지? 반복
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0)	// 짝수
			// 출력
			printf("%d ", arr[i]);
	}
	printf("\n");
}

int main_m21(void) {
	int arr[10];
	printf("총 10개의 숫자 입력\n");
	// 10개의 데이터 입력 받기 -> for문 : 반복 : 출력과 입력
	for (int i = 0; i < 10; i++) {
		// 반복 실행할 문장 : 1. "입력 : " 출력, 2. 입력 받기
		printf("입력: ");
		scanf("%d", &arr[i]);	// 해당 변수의 주소값
	}
	odd(arr, 10);	// 홀수를 출력하는 함수 : 배열, 길이
	even(10, arr);	// 짝수를 출력하는 함수
	return 0;
}