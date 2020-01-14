/* 
void* : 데이터유형에 관계없이 어느 주소든지 저장하려는 목적으로 사용(장점)
단점 : 데이터 유형을 모르므로 실질적으로 사용하려면 사용할 수 없음
포인터 : 주소, 데이터 유형
그런데, 어느 데이터 포인터인지 확인할 수 있으면 강제형 변환
int sum 100;
int count = 2;
double avg = (double)sum / count;	// 강제 형 변환
void * vptr -> (int *) vptr -> 데이터 유형을 알게되고 조작을 할 수 있다.
*/

#include	<stdio.h>

int main_voidP(void) {
	int num = 10;
	printf("num = %d\n", num);
	void* ptr = &num;
//	printf("num = %d\n", *ptr);	// 에러
	printf("num = %d\n", *(int*)ptr);	// 강제 형변환 -> int 포인터
	return 0;
}