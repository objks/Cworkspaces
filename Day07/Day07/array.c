/* 
1차원 배열
형식 : 데이터타입 배열이름[크기];
데이터 타입 : char, short, int, long, long long, float, double, long double
배열 : 변수 이름과 같은 작명을 한다.
크기 : 필요한 만큼 선언
*/

#include	<stdio.h>

int main_array(void) {
	// 지역변수는 stack에 저장되고 초기화를 하지 않으면 쓰레기값이 저장되어 있음
	char carr[10];	// 문자 입력, 통신할 때 "abc"(3)->"abc\0"(4)
	short sarr[20];
	int narr[30] = { 10, 20 };	// narr[0] = 10, narr[1] = 20, narr[2~29] = 0
	double darr[20];	// ? 쓰레기 값(어떤 값인지 모르는 값)

	narr[10] = 20;
	// 배열은 반복문을 사용하는데 용이
	for (int i = 0; i < 30; i++)
		narr[i] = 2 * i;
	// sizeof : 메모리에서 몇 바이트를 차지하느냐?

	printf("narr 메모리 크기 = %d\n", sizeof(narr));	// 배열 narr가 메모리 상에 몇 바이트?

	for (int i = 0; i < 30; i++)
		printf("narr[%d] = %d\n", i, narr[i]);
	return 0;
}