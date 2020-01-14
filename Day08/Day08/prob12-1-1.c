/*
문제 1 아래의 예제 실행 시 변수와 포인터 변수의 관계를 그려서
	설명해보자. 또한 출력의 결과도 예상해 보자.
	int main(void) {
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d\n", num);
	return 0;
	}
*/

#include	<stdio.h>

int main_prob12_1_1(void) {
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	printf("ptr1 = %p, *ptr1 = %d\n", ptr1, *ptr1);	// %p : 주소 출력 서식
	(*ptr1)++;	// 포인터 변수 ptr1이 가리키는 변수의 값이 증가
	(*ptr2)++;	// *ptr2++ : 포인터 변수 ptr2가 가리키켰는데 아무것도 하지 않고, 주소값만 증가
	printf("%d\n", num);	// 12
	printf("ptr1 = %p, *ptr1 = %d\n", ptr1, *ptr1);	// %p : 주소 출력 서식
	printf("ptr2 = %p, *ptr2 = %d\n", ptr2, *ptr2);	// 주소
	return 0;
}