/*
double pointer의 필요성
함수를 호출하면서 그 결과로 포인터 변수가 가리키는 대상을 변경하려는 용도
*/

#include	<stdio.h>

void swap3(int** dpa, int** dpb) {
	printf("*dpa=%p, *dpb=%p\n", *dpa, *dpb);	// &a->&b
	int* tmp;
	tmp = *dpa;	// tmp=&a
	*dpa = *dpb;		// &a->&b
	*dpb = tmp;		// &b->&a
	printf("*dpa=%p, *dpb=%p\n", *dpa, *dpb);	// &b->&a
}

int main_double(void) {
	int a = 10, b = 20;	// a, b는 유지한채
	int* pa = &a;
	int* pb = &b;

	printf("pa=%p, pb=%p\n", pa, pb);
	printf("*pa=%d, *pb=%d\n", *pa, *pb);	// *pa=10, *pb=20
	swap3(&pa, &pb);	// pa:&a->&b, pb:&b->&a
	printf("*pa=%d, *pb=%d\n", *pa, *pb);	// *pa=20, *pb=10
	printf("pa=%p, pb=%p\n", pa, pb);
	return 0;
}