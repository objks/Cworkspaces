/* 도전 3
도전 3. 두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는
	프로그램을 작성해 보자.
	실행의 예 : 6 9 -> 3

	유클리드 호제법
	6(작은 수) 9(큰 수) -> 최대공약수
	9(큰 수) % 6(작은 수) 6(작은 수) -> 최대공약수와 같다.
*/

#include	<stdio.h>

int gcd(int large, int small) {
	if (small == 0)		// 작은 수가 0이면 큰 수가 최대공약수
		return large;
	else
		return gcd(small, large % small);
}

int main_m13(void) {
	int num1, num2;

	printf("두 개의 정수 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {	// num1(큰수 -> 작은 수), num2(작은 수 -> 큰 수)
		int tmp = num1;	// num1과 num2를 교환
		num1 = num2;
		num2 = tmp;
	}
	// num1 < num2
	printf("최대공약수 = %d\n", gcd(num2, num1));
	return 0;
}