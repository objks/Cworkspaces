#include	<stdio.h>

int main_gugu(void) {
	// 단을 입력 받고, 그 단의 구구단을 출력
	int dan;
	printf("몇 단: ");
	scanf("%d", &dan);
	// 반복문
	// dan * 1 = dan *1 (1~9)
	printf("%d단\n", dan);
	int i = 1;	// i, j, k, l,
	while (i < 10) {	// 반복문
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}

	printf("\n%d단\n", dan);
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	return 0;
}