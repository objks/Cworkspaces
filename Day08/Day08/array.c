/* 
배열과 포인터
배열 : 일정한 크기의 데이터를 선언해서 사용
int arr[3];
배열의 이름 : 배열의 처음 요소의 주소를 나타낸다.
arr[i] : arr[0] ~ arr[2]
arr[i]의 주소 : &arr[i]
배열과 포인터의 비교
배열의 이름 : 상수 (메모리를 점유하면 고정된 주소값을 가진다.)
	변경 불가능
포인터 변수 : 변수 (가리키는 대상을 변경 가능함)
같은점 : 배열이름, 포인터변수는 주소를 가진다.
*/

#include	<stdio.h>

int main_array(void) {
	int arr[3] = { 0, 1, 2 };
	printf("arr = %p\n", arr);
	for (int i = 0; i < 3; i++) {
		printf("arr[%d] 값 = %d, arr[i]의 주소 = %p\n", i, arr[i], &arr[i]);
	}

	int* parr = arr;	// 포인터 변수 : 배열 arr의 주소를 저장 (parr값을 유지)
	// 포인터 변수를 사용해서 배열에 접근하는 방법 1 : parr의 값을 유지
	for (int i = 0; i < 3; i++) {
		printf("*(parr + %d) = %d, parr + i = %p, parr = %p\n", i, *(parr + i), parr + i, parr);
	}

	// arr[i] : *(parr + i) 같은 표현 -> 서로 호환(바꿔서)해서 사용할 수 있음.

	int* eptr = &arr[2];
	// 포인터 변수를 사용해서 배열에 접근하는 방법 2 : parr값을 변경하면서
	for (; parr <= eptr; parr++) {	// parr값을 변경해 가면서 배열에 접근
		printf("*parr = %d, parr = %p\n", *parr, parr);
	}
	return 0;
}
