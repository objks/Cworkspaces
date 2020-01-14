/*
문제 1
프로그램 사용자로부터 총 5개의 정수를 입력 받아서, 그 수의 합을 출력
하는 프로그램을 작성해보자. 단! 한 가지 조건이 있다. 정수는 반드시
1이상이어야 한다. 만약에 1 미만의 수가 입력되는 경우에는 이를 입력으
로 인정하지 않고 재 입력을 요구하야 한다. 그래서 결국 1 이상의 정수
5개를 모두 입력받을 수 있도록 프로그램을 완성하여야 한다.
*/

#include	<stdio.h>

int main(void) {
	int i = 0;
	int num;
	int sum = 0;
	while (i < 5) {	// 입력 횟수 : 5회
		/*
		do {
			scanf("%d", &num);
		} while (num < 1);
		*/
		num = 0;
		while(num < 1)
			scanf("%d", &num);
		sum += num;
		i++;
	}
	printf("합: %d\n", sum);
	return 0;
}