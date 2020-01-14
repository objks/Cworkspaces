/*
문제 4. 길이가 6인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4,
	5, 6으로 초기화한 다음, 배열에 저장된 값의 순서가 6, 5, 4,
	3, 2, 1이 되도록 변경하는 예제를 작성해보자. 단 배열의 앞
	과 뒤를 가리키는 포인터 변수 2개를 선언해서 이를 활용하여
	저장된 값의 순서를 바꿔야 한다.
*/

#include	<stdio.h>

int main_prob13_1_4(void) {
	int arr[6] = { 1, 2, 3, 4, 5, 6 };	// 0~5
	int* sptr = arr;
	int* eptr = &arr[5];

	for (int i = 0; i < 6 / 2; i++) {
		int tmp = *sptr;	// tmp=1
		*sptr++ = *eptr;	// *sptr=6
		*eptr-- = tmp;		// *eptr=1
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}