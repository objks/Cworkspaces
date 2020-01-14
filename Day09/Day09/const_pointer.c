/*
const : 상수로 변경하지 못하게 한정을 지을 때
*/

#include	<stdio.h>

void callFunction(const int* ptr) {
//	*ptr = 50;
	int* bptr = ptr;
	*bptr = 50;
	int var2 = *ptr + 10;
}

void function2(int* const ptr) {
	int one = 30;
//	ptr = &one;
}

int main_const(void) {
	int num = 10;	// 현재 10으로 변수에 넣은 값을 뒤에서 변경하지 못하게 하고 싶다.
	num = 20;

	const int var1 = 20;	// 초기화 값을 뒤에서 수정하지 못하게
//	var1 = 30;	// 에러
	const int* ptr = &num;	// 내용(포인터가 가리키는 값)을 변경 불가능
//	*ptr = 30;

	int* const pnum = &num;
//	pnum = &var1;

	callFunction(&num);
	function2(&num);
}