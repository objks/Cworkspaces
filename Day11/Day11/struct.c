/*
구조체
여러개의 데이터를 묶은 것
*/

#include	<stdio.h>
// 구조체 정의 : 사용자 정의 데이터 타입
struct point {	// 좌표값을 저장하는 구조체
	int xpos;	// x 좌표값
	int ypos;	// y 좌표값
} p1, p2, p3, p4;

struct person {	// 사람 정보를 저장하는 사용자 데이터 타입 : 구조체
	// 멤버
	char name[20];	// 한글 1자 : 3byte
	char phoneNum[20];	// 전화번호 010
	int age;
	char ssn[15];	// 계속 필요시 멤버를 추가
} lee, choi;

int main_struct(void) {
	int num;	// int: 데이터 타입, num: 변수 이름
	// 선의 좌표를 읽는다.
	struct point left;	// 데이터 타입: struct point, 변수이름: left
	struct point right;

	printf("좌표값 입력하세요(20 30) : ");
	scanf("%d %d", &left.xpos, &left.ypos);	// 변수이름.멤버이름
	printf("좌표값 입력하세요(20 30) : ");
	scanf("%d %d", &right.xpos, &right.ypos);
	printf("left 좌표값 : (%d, %d)\n", left.xpos, left.ypos);
	printf("right 좌표값 : (%d, %d)\n", right.xpos, right.ypos);

	// 홍길동의 정보 입력
	struct person hong;	// 데이터 타입(struct person) 변수이름(hong)
	printf("이름 : ");
	scanf("%s", hong.name);	// hong.name : 주소
	printf("전화번호 : ");
	scanf("%s", hong.phoneNum);
	printf("나이 : ");
	scanf("%d", &hong.age);
	printf("주민등록번호 : ");
	scanf("%s", hong.ssn);
	printf("이름 : %s\n", hong.name);
	printf("전화번호 : %s\n", hong.phoneNum);
	printf("나이 : %d\n", hong.age);
	printf("주민등록번호 : %s\n", hong.ssn);

	return 0;
}