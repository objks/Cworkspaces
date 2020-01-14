/*
데이터 표현방식 : 2진수, 8진수, 10진수, 16진수
0b1000 : 이진수
0145   : 8진수 (0으로 시작, 0~7까지의 숫자를 사용)
1234   : 10진수 (0~9)
0x123  : 16진수 (0~9, A(a), B(b), C(c), D(d), E(e), F(f))
*/

#include	<stdio.h>

int main_data(void) {
	int num = 0b10101010;	// 이진수 표현방법 : 0b로 시작 (b: binary)
	printf("%d\n", num);	// 10진수로 출력
	num = 01234567;			// 8진수 표현방법 : 0으로 시작 (o: octal(8))
	printf("%d\n", num);
	num = 1234567;			// 10진수 표현방법 : 0~9
	printf("%d\n", num);
	num = 0x1234abc;		// 16진수 표현방법 : 0x로 시작(x: hexadecimal의 약자)
	printf("%d\n", num);
	return 0;
}