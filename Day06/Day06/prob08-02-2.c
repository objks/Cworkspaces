/*
문제 2. 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성
	해보자.

	A Z
  + Z A
 ------
	9 9

반복문을 중첩
continue; break;
*/

#include	<stdio.h>

int main_0822(void) {
	int A, Z;

	for (A = 0; A < 10; A++) {
		for (Z = 0; Z < 10; Z++) {
			if (A == Z)		// A=Z -> AA + AA (!AZ+ZA)
				continue;
			if ((A * 10 + Z + Z * 10 + A) == 99) {
				printf("A=%d, Z=%d\n", A, Z);
				break;	// A에 대한 Z를 구하면, 다른 Z를 건너뛰자.
			}
		}
	}
	return 0;
}