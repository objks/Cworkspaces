/*
문제 22-1 [구조체의 정의]

문자열 형태의 "종업원 이름"과 문자열 형태의 "주민등록번호"
 그리고 정수 형태의 "급여정보"를 저장하는 employee라는 이름의
 구조체를 정의해보자. 그리고나서 employee 구조체 변수를 하나
 선언한 다음, 프로그램 사용자가 입력하는 정보로 이 변수를 채우자.
 그리고 마지막으로 구조체 변수에 채워진 데이터를 출력해 보자.
*/

#include	<stdio.h>
#include	"define.h"

int main_prob221(void) {
	struct employee p1;

	printf("이름: ");
	scanf("%s", p1.name);
	printf("주민등록번호: ");
	scanf("%s", p1.ssn);
	printf("급여정보: ");
	scanf("%d", &p1.salary);

	printf("이름: %s\n", p1.name);
	printf("주민등록번호: %s\n", p1.ssn);
	printf("급여정보: %d\n", p1.salary);
	return 0;
}