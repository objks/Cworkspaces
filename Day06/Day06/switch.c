/*
���ǹ� : switch��
����� ���� ���� ������ �� ���

�� ���� �޴��� �Է� �ް�, �������(+(1), -(2), *(3), /(4), %(5))
 
*/

#include	<stdio.h>

int main_switch1(void) {
	// �� ���� �Է�
	int num1, num2;
	int menu;

	printf("�� �� �Է� : ");
	scanf("%d %d", &num1, &num2);
	printf("�޴� ���� : ");
	scanf("%d", &menu);
	// if, ���׽�(�������� ����:���ؾߵɰ� ����), switch
	switch (menu) {	// int, char : ������ ��->�� ���� ����� ��
	case 1:	// ���ϱ�(+)
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;	// switch ���� ����
	case 2:	// ����(-)
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case 3:	// ���ϱ�
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case 4:	// ������
		printf("%d / %d = %d\n", num1, num2, num1 / num2);
		break;
	case 5:	// ������
		printf("%d %% %d = %d\n", num1, num2, num1 % num2);
		break;
	default:	// other : 1~5�� �ƴ� �� �ۿ�
		printf("�ùٸ� �޴��� �����ϼ���\n");
		break;	// ���� ���� (������ switch���� ����)
	}
	return 0;
}
