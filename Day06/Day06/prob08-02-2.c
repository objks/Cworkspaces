/*
���� 2. ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ�
	�غ���.

	A Z
  + Z A
 ------
	9 9

�ݺ����� ��ø
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
				break;	// A�� ���� Z�� ���ϸ�, �ٸ� Z�� �ǳʶ���.
			}
		}
	}
	return 0;
}