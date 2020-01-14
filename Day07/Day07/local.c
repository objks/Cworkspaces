/*
전역변수(global) :
	파일내의 어느 곳에서든 사용 가능
	모든 파일에서 (프로젝트내에서) 사용 가능
	고유의 주소가 존재한다.
	크기(양) : 적당히 사용, 너무 많이 사용하면 부담
	파일의 앞에서 정의 (존재) : 함수 앞에서 사용
	다른(모든) 블록에서 호출 가능

지역변수(local) : 해당 지역 (함수(블록)내 '{', '}')
	블록내에서만 사용되는 변수
	stack 영역에 저장됨
	블록을 벗어나면 사라진다. (블록이 실행되는 기간에만 존재)
	다른 블록에서 호출할 수 없음

static 변수
	함수(파일)내에서 정의해서 사용 : 해당 함수나 파일내에서 사용 가능
	다른 함수나 파일에서는 호출 불가능
	변수의 값은 유지 : heap 영역에 저장이 되고 프로그램이 실행되는 동안 계속 존재)
	다음에 함수가 호출되면 이전에 저장되었던 값을 다시 사용할 수 있음.
	크기 : 적당한 크기를 사용해야 함.

register 변수
	CPU 구조상에 존재하는 레지스터 중에 하나를 사용한다. : 1~2개 정도
	빠른 프로그램 실행이 가능. (일반적으로는 사용하지 않고)

volatile 변수 : 휘발성(?)
*/

#include	<stdio.h>

// 방법 1 : 앞에 정의
void simpleFuncOne() {
	int num = 20;	// 지역변수 : 함수내에서만 유효하고 함수가 종료되면 없어짐
	int num1 = 30;	// stack 영역에 저장
	int num2 = 40;
	printf("num = %d\n", num);
}

int simpleFuncTwo(int num) {	// 매개변수로 전달되는 num은 지역변수이다.
	num = 30;	// 함수가 존재하는 기간에만 유효
	return num;
}	// main에 있는 num이 복사되어 잠시 사용되다가 사라짐

int main_local(void) {
	int num = 10;
	printf("num = %d\n", num);

	simpleFuncOne();
	printf("num = %d\n", num);

	num = simpleFuncTwo(num);		// simpleFuncTwo 함수 이름도 일종의 변수이며, 주소가 있다. 값도
	printf("num = %d\n", num);

	return 0;
	// 변수 num은 main과 simpleFucnOne에서 선언되고 사용하지만
	// 이름은 같지만 실제로는 다른 변수
}