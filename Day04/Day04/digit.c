/*
출력 서식
%d -> %8d : 8자리로 출력 -> 8자리가 인면 처음에 스페이스로 뛰워주고 값을 출력
%08d : 8자리인데 빈공간을 0으로 채운다.(' '가 아니라)
%-8d : 값을 출력하고 나머지는 ' '로 채운다.
%8.2f : 8자리 출력, 소수점은 2자리까지(3자리에서 반올림)
%8s
일정한 형식으로 띄워쓰기
*/

#include	<stdio.h>

int main_digit(void) {
	int num = 100;
	printf("%7d\t%-8d\t%06d\n", num, num, num);

	double d1 = 12.345678;
	printf("%4.2f\t, %-5.3f\n", d1, d1);

	int num2 = 10000000;
	printf("%5d\n", num2);

	for (int i = 1; i < 10; i++) {
		printf("2 * %d = %2d\n", i, 2 * i);
	}
	return 0;
}