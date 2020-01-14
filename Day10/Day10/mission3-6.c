/*
도전 6 : 숫자 맞추기
1. 숫자 순서 발생 : 배열 및 난수 발생(중복 방지)
2. 스트라이크 판단 방법
3. 볼 판단 방법
4. 반복 실행
5. 전역변수와 지역변수
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>

int genNumber() {
	return rand() % 10;
}

int main(void) {
	int data[3];	// 0~9사이의 숫자, 중복 없음

}