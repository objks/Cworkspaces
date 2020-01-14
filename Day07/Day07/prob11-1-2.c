/*
문제 2. char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로
	초기화하고, 초기화 이후에는 저장된 내용을 출력하는 예제를
	작성해 보자. -> 반복문을 사용해서 한 글자씩 출력
	"Good time" -> 문자열은 '\0' -> 배열의 크기는 10
*/

#include	<stdio.h>
//#include	<string.h>	// 문자열을 조작하는 라이브러리
	// strlen : 무자열의 길이
	// strcmp : string compare 문자열 비교
	// strcpy : string copy 문자열 복사 A->B (기존에 있던 B의 내용은 지워진다.)
	// strcat : string concaternation(?) A->B추가해서 덧붙인다. (B의 내용은 유지)

int strlen(char* buffer) {
	// strlen : string length 문자열의 길이를 구하는 함수
	int i;
	for (i = 0; buffer[i] != '\0'; i++)
		;
	return i;
}

int main_prob_11_1_2(void) {
	char buffer[] = "Good time";	// "Good time\0"
	// buffer[i] != '\0'
	for (int i = 0; buffer[i] != '\0'; i++)
		printf("%c", buffer[i]);
	printf("\n");

	for (int i = 0; i < strlen(buffer); i++)	// strlen 함수 사용 예
		printf("%c", buffer[i]);
	printf("\n");
}
// 배열의 크기 : sizeof(buffer) -> 몇 바이트인지? 알 필요 없음
