/*
switch(num) {
case 1:
case 2:
case 5:
	printf("1�� 2�� ��� ����\n");
	break;
case 3:
case 4:
	printf("3�� 4�� ��� ����\n");
	break;
}

*/

#include	<stdio.h>

int main_switch2(void) {
	int num = 2;

	switch (num) {	// int
	case 1:	// 1�� 2 �� ���� ���
	case 2:
		printf("1�� 2�� ��� ����\n");
		break;
	case 3:	// 1���� ����
		printf("3�� ��� ����\n");
		break;
	case 4:
		printf("4�� ��� ����\n");
		break;
	}
}