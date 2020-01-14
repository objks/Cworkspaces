/*
증가, 감소 : 변수값을 1만큼 증가시키거나 감소시키는 방법
++num;	// num = num + 1
num++;	// num = num + 1
*/

#include	<stdio.h>

int main_Incre(void) {
	int num = 20;
	int b;

	int len = printf("num = %d\n", num);	// num = 20
	printf("출력한 글자 수 : %d\n", len);

	b = num++;	// b = 20, num = 21
	printf("b = %d, num = %d\n", b, num);	// b = 20, num = 21
	b = ++num;	// num = 22, b = 22
	printf("b = %d, num = %d\n", b, num);	// b = 22, num = 22
	return 0;
}