/*
10개의 정수 입력 받기
입력받는 순서대로 홀수는 앞에서 출력
짝수는 뒤에서 부터 출력
입력 : 1 1 4 4 4 4 3 3 2 2
출력 : 1 1 3 3 2 2 4 4 4 4
*/

#include	<stdio.h>

int main_m23(void) {
	int arr[10];
	int num;
	int* fptr = &arr[0];	// 배열의 처음부터
	int* bptr = &arr[9];	// 배열의 뒤에서부터
	int front = 0;
	int back = 9;

	printf("총 10개의 숫자 입력\n");
	// 데이터 입력 -> 반복
	for (int i = 0; i < 10; i++) {
		// 반복할 내용
		printf("입력: ");
		scanf("%d", &num);
		// 입력받은 값이 홀수인지? 짝수인지? 판단 -> 배열에 저장
		if (num % 2 == 0)	// 짝수
			*bptr-- = num;
		// arr[back--] = num;
		else {	// 홀수
			*fptr++ = num;	// 0->증가되는 방향으로 진행
			// arr[front++] = num;
		}
	}

	printf("배열 요소의 출력:");
	for (int i = 0; i < 10; i++)
		printf(" %d", arr[i]);
	printf("\n");
	return 0;
}