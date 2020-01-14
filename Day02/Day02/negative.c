/*
양의 수에 대한 음수를 구하는 방법
2의 보수를 구한다.
1의 보수 + 1
1의 보수 : ~num
~num + 1
*/

#include	<stdio.h>

int main(void) {
	int num = 15;

	printf("%d\n", num);
	num = ~num + 1;	// 음수 15(-15)
	printf("16진수 출력 0x%x, 10진수 출력 %d\n", num, num);

	num = ~num + 1;	// 양수 15
	printf("16진수 출력 0x%x, 10진수 출력 %d\n", num, num);

	num = 0xffffffff;
	printf("16진수 출력 0x%x\n", num);
	num = num & 0xfefefefe;	// e: 14(1110) 비트 0으로 masking 시킨다.
	printf("16진수 출력 0x%x\n", num);

	num = num | 0x01010000;	// e: 14(1110) 비트 1로 masking 시킨다.
	printf("16진수 출력 0x%x\n", num);

	num = 0x01;
	printf("16진수 출력 0x%x\n", num);
	num <<= 4;	// 왼쪽으로 4비트 이동 (왼쪽으로 1비트 이동-> *2)
	printf("16진수 출력 0x%x\n", num);
	num >>= 2;	// 오른쪽으로 2비트 이동 (오른쪽으로 1비트 이동->/2)
	printf("16진수 출력 0x%x\n", num);

	return 0;
}