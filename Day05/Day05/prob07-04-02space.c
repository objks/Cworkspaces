/*
		* �����̽��� ��: 4��	i=0 5-1-i
	  0 *				 3		i=1
	0 0 *				 2		i=2
  0 0 0 *				 1		i=3
0 0 0 0 *				 0		i=4


*/

#include	<stdio.h>

int main_space(void) {
	// �ݺ���
	int i, j;

	for (i = 0; i < 5; i++) {
		// �����̽� ��� : 5-1-i��	-> �ݺ���
		for (j = 0; j < 5 - 1 - i; j++) {
			printf("  ");	// ' ' + ' '
		}
		// 0�� ���      : i��		-> �ݺ���
		for (j = 0; j < i; j++) {
			printf("0 ");
		}
		// * ���
		printf("*\n");
	}
	return 0;
}