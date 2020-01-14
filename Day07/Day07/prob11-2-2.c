/*
문제 2. 프로그램 사용자로부터 영단어를 입력 받아서 char형
	배열에 저장한다. 그 다음 배열에 저장된 영단어를 역순으로
	뒤집는다. 물론 이때에 널('\0') 문자의 위치를 변경해서는
	안된다. 뒤집고 나서는 제대로 뒤집어 졌는지 확인하기 위해서
	출력해 보자. 예) "hello" -> 'olleh"
*/

#include	<stdio.h>

extern int strlen(char arr[]);	// prob11-1-1-2.c에 있는 strlen 함수를 이용할 때 extern

int main_prob11_2_2(void) {
	char buffer[256];

	printf("단어 입력 : ");
	scanf("%s", buffer);	// 단어 입력
	int len = strlen(buffer);
	for (int i = 0; i < len / 2; i++) {	// 반만 대칭되게 교환
		char tmp = buffer[i];			// buffer[i]와 buffer[len - 1 -i] 교환
		buffer[i] = buffer[len - 1 - i];
		buffer[len - 1 - i] = tmp;
	}
	printf("%s\n", buffer);
	return 0;
}