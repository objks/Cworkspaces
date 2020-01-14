/*
static 변수 : 함수 또는 파일내에서 존재하는 변수
*/

#include	<stdio.h>

static int total = 0;	// static 변수 : 내 파일내에서만 사용 가능
extern void callFuncTwo();

int add(int num) {
	printf("total = %d\n", total);	// 파일내에서는 어디서든지 접근 가능
	static int sum = 0;	// static 변수
		// 처음에 함수 add가 호출될때만 실행되고
		// 그 다음에 호출될 때는 실행되지 않고, 값은 유지됨

	printf("sum = %d\tnum = %d\n", sum, num);	// '\t' : 탭(8칸) 공간
	sum += num;	// 누적해서 더하기 실행됨
	return sum;
}

void sub() {
//	int var3 = sum + 60;	// static 변수 sum은 add함수에서만 접근 가능하므로
							// sub함수에서는 접근 불가능
}

int main_static(void) {
	int i;
	int result;

	for (i = 1; i <= 10; i++) {
		result = add(i);
		sub();
	}
	printf("sum = %d\n", result);
//	printf("sum = %d\n", sum);	// 접근 불가능
	callFuncTwo();
	return 0;
}