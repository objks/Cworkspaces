/*
조건문 : switch문
경우의 수에 따라 실행을 할 경우

두 수와 메뉴를 입력 받고, 산술연산(+(1), -(2), *(3), /(4), %(5))
 
*/

#include	<stdio.h>

int main_switch1(void) {
	// 두 수를 입력
	int num1, num2;
	int menu;

	printf("두 수 입력 : ");
	scanf("%d %d", &num1, &num2);
	printf("메뉴 선택 : ");
	scanf("%d", &menu);
	// if, 삼항식(적절하지 않음:비교해야될게 많음), switch
	switch (menu) {	// int, char : 정해진 수->몇 가지 경우의 수
	case 1:	// 더하기(+)
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;	// switch 문을 종료
	case 2:	// 빼기(-)
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case 3:	// 곱하기
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case 4:	// 나누기
		printf("%d / %d = %d\n", num1, num2, num1 / num2);
		break;
	case 5:	// 나머지
		printf("%d %% %d = %d\n", num1, num2, num1 % num2);
		break;
	default:	// other : 1~5가 아닌 그 밖에
		printf("올바른 메뉴를 선택하세요\n");
		break;	// 생략 가능 (어차피 switch문을 종료)
	}
	return 0;
}
