/*
문자열 입력 -> 저장하려면 배열 -> 배열의 크기
'\0'가 사용되는 이유 : 문자열의 끝을 판단하기 위해(문자열의 길이를 알기 위해)
*/

#include	<stdio.h>
#include	<string.h>

int main_input(void) {
	char buffer[1024];	// 몇 바이트인지 모르기 대문에 예상되는 크기보다 큰것으로 잡는다.
	printf("문자열 입력 : ");
	scanf("%s", buffer);	// scanf &num(주소) char 배열의 주소 -> buffer (배열의 이름)
	// scanf("%s", buffer);	// 단어 단위로 입력
	printf("%s\n", buffer);
	printf("문자열의 크기 = %d\n", strlen(buffer));

	// 주의사항
	int ch = getchar();	// '\n'(Enter)를 강제로 읽어 들인다.	// Good[Enter]

	printf("문자열 입력 : ");	// 한 줄을 입력
	gets(buffer);	// stdio.h에서 정의된 라이브러리 함수	// "Good time\0"
	
	printf("%s\n", buffer);
	printf("문자열의 크기 = %d\n", strlen(buffer));

	fgets(buffer, 1024, stdin);	// = gets	 f: file
	printf("%s\n", buffer);
	printf("문자열의 크기 = %d\n", strlen(buffer));

	int num;
	// sscanf(buffer, "%d", &num);
	// fscanf(stdin, "%d", &num);

	return 0;
}