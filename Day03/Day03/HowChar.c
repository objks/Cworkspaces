/*
문자 표현
한 문자 : 'A' (홑 따옴표 '를 사용해서 'A')
*/

#include	<stdio.h>

int main_howChar(void) {
	char ch = 'B';	// 문자 : 1 byte -> char
	int ch2 = 'F';	// 보통은 int(4 byte)를 사용->낭비 요인
	char ch1 = 65;
	int ch3 = 100;

	// EOF : 파일에 정보를 저장을 하고, 파일의 내용의 마지막 EOF(end of file) : -1 (int)
	printf("%c %d\n", ch, ch);		// %c : character의 약자 : 한 문자
	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	return 0;
}