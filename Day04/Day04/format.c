/*
서식문자: 데이터를 데이터의 형식을 정해서 출력
%d : int
%c : character, 한 문자
%f : 실수(float, double)
%s : string(문자열 char[]) "내용"
%x : 16진수 (hexadecimal)
%o : octal(8진수)
%ld : long decimal
%lld : long long decimal
%u : unsigned int
%e : 지수 형태 3.14E-5
%g : %e, %f 둘다 포함하고 경우에 따라서 %f 또는 %e로 출력

출력과 입력시 차이점
입력 : %f : float, %lf : long float-> double
출력 : float, double의 구분없이 %f
*/

#include	<stdio.h>

int main_format(void) {
	int num = 100;
	printf("num = %d, 0x%x, 0%o\n", num, num, num);
	double d1 = 0.0000456;
	printf("d1 = %f(%%f), %e(%%e), %g(%%g)\n", d1, d1, d1);
	printf("%s\n", "대한민국");
	int* pa = &num;
	printf("pa = %p\n", pa);	// %p : 변수 num의 주소
	int ch = 'r';
	printf("ch = %c\n", ch);	// %c : 한 문자
	return 0;
}