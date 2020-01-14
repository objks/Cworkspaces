/*
문제 1
프로그램 사용자로부터 2개의 정수를 입력받아서, 두 수를 포함해서 그 사이에 존재하는 정수
들의 합을 계산해서 출력하는 프로그램을 작성해 보자. 예를 들어서 3과 5가 입력되면, 3+4+5의
결과가 출력되어야 한다. 그리고 문제를 조금 간단히 하기 위해서, 첫 번째 입력되는 정수보다 두
번째 입력되는 정수가 더 커야 한다는 조건을 걸기로 하겠다.

입력 값의 제약이 없을 경우
입력조건 :  num1=3 num2=5
			num1=5 num2=3
3, 5		for(i = num1;i <= num2;i++)
5, 3		for(i = num2;i <= num1;i++)
			for(i = num1;i >= num2;i--)
*/

#include	<stdio.h>

int main_prob07_4_1(void) {
	int start, end;
	int sum = 0;
	printf("두 수를 입력 하세요 : ");
	scanf("%d %d", &start, &end);
	for (int i = start; i <= end; i++)
		sum += i;
	printf("합=%d\n", sum);
	return 0;
}