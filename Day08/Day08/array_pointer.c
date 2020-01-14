/*
배열과 포인터
*/

#include	<stdio.h>

int main_parr(void) {
	int num = 10;		// 변수
	int* ptr = &num;	// 포인터 변수
	printf("num = %d\n", num);	// 변수 num을 사용해서 출력
	printf("num = %d\n", *ptr);	// 포인터 변수를 통해서 num을 출력
	// *ptr : 포인터변수 ptr에 저장된 주소가 가리키는 변수의 내용
	// ptr : 포인터변수의 값 = 주소가 저장되고 여기서는 변수 num의 주소

	int arr[4] = { 5, 10, 15, 20 };
	for (int i = 0; i < 4; i++) {
		printf("arr[%d]의 값 : %d, &arr[%d] = %p\n", i, arr[i], i, &arr[i]);
		// arr[i] : 배열 arr의 i번째 값
		// &arr[i] : 배열 arr의 i번째 값의 주소
	}

	// 포인터 변수를 사용해서 접근
	int* parr = arr;	// arr : 배열의 주소이므로 &를 붙일 필요가 없음
	// arr[i] : *(parr+i) -> 같은 표현 (같은 값을 가리킨다)
	// &arr[i] : parr + i -> 같은 표현

	for (int i = 0; i < 4; i++) {
		printf("arr[%d]의 값 : %d, &arr[%d] = %p\n", i, parr[i], i, &parr[i]);
		// arr[i] : 배열 arr의 i번째 값
		// &arr[i] : 배열 arr의 i번째 값의 주소
	}

	int* p2 = &arr[0];	// arr와 &arr[0]는 같은 값을 가진다.
	for (int i = 0; i < 4; i++) {
		printf("*(parr + %d)의 값 : %d, parr + %d = %p\n", i, *(parr+i), i, parr + i);
	}

	for (int i = 0; i < 4; i++) {
		printf("*(parr + %d)의 값 : %d, parr + %d = %p\n", i, *(arr + i), i, arr + i);
	}

	
	return 0;
}