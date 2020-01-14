/*
switch(num) {
case 1:
case 2:
case 5:
	printf("1과 2의 경우 실행\n");
	break;
case 3:
case 4:
	printf("3과 4의 경우 실행\n");
	break;
}

*/

#include	<stdio.h>

int main_switch2(void) {
	int num = 2;

	switch (num) {	// int
	case 1:	// 1과 2 두 가지 경우
	case 2:
		printf("1과 2인 경우 실행\n");
		break;
	case 3:	// 1가지 조건
		printf("3인 경우 실행\n");
		break;
	case 4:
		printf("4인 경우 실행\n");
		break;
	}
}