/*
논리연산자 : &&(AND), ||(OR), !(NOT)
두 개의 조건을 AND, OR로 연산할 때 사용

예, 조국 장관의 지지도 : 성별, 연령대 별로 여론조사 결과를 인용
&& : 두가지 조건이 모두 참일때 참이다.
|| : 두가지 중에 하나라도 참이면 참이다.
! : 부정 (참->거짓, 거짓->참)
*/

#include	<stdio.h>

int main_Logical(void) {
	int age = 25;
	int gender = 1;	// 1:남성, 0:여성

	if (age >= 10 && age < 20)	// 10대 
		printf("10대\n");
	else if (gender == 1 || age > 40)
		printf("그냥\n");
	gender = !gender;	// -> 여성
	int run = 1;
	while (run) {	// 반복문 : 조건이 참 일때 계속 반복해서 실행
		if (age > 30)
			run = !run;	// 1-> 0	// 반복문을 종료하기 위해 부정(0)
	}

	// 콤마(,) 연산자
	int a=10, b=10;
	int c=10;
	printf("a"), printf("b");
	printf("a");
	printf("b");
	printf("%d %d %d\n", a, b, c);
}
