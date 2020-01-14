/*
문제 17-1 [이중 포인터 변수의 활용]
다음과 같이 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을
선언한다.
	int * maxPtr;
	int * minPtr;
	int arr[5];

그리고 MaxAndMin이란 이름의 함수를 정의하고 이를 호출하면서 위
의 배열과 두 포인터 변수에 대한 정보를 전달하자. 어떠한 정보를
어떻게 전달할지는 여러분이 결정할 몫이다. 그리고 함수 호출이
완료되면, 포인터 변수 maxPtr에는 가장 큰 값이 저장된 배열요소의
주소 값이, minPtr에는 가장 작은 값이 저장된 배열요소의 주소 값
이 저장되어야 한다.
*/

#include	<stdio.h>

// 최대값과 최소값의 주소를 가리키도록 maxPtr, minPtr의 값을 변경
void MaxAndMin(int arr[], int len, int** maxP, int** minP) {
	*maxP = &arr[0];	// maxPtr=&data[0];
	*minP = &arr[0];	// 최대값과 최소값을 &arr[0]을 가정
	for (int i = 1; i < len; i++) {
		// 최대값
		if (**maxP < arr[i]) {	// **maxP=현재의 최대값(처음에는 data[0])
			*maxP = &arr[i];	// 최대값의 주소
		}
		// 최소값
		if (**minP > arr[i]) {	// 새로운 최대값을 구하기 위해 비교
			*minP = &arr[i];	// 최소값의 주소
		}
	}
}

int main_prob17_1(void) {
	int data[5] = { 10, 5, 7, 3, 6 };
	// 배열의 최소값과 최대값
	int* maxPtr;	// 배열의 최대값을 가리키는 포인터 변수
	int* minPtr;	// 배열의 데이터 중 최소값을 가리키는 포인터 변수

	// call by reference에 의해서 포인터변수의 주소값을 매개변수로 넘겨주고
	// 함수를 실행한 후 값이 변경되도록 한다.
	MaxAndMin(data, 5, &maxPtr, &minPtr);
	printf("최대값=%d, 최소값=%d\n", *maxPtr, *minPtr);
	return 0;
}