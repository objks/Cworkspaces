/*
�������� : &&(AND), ||(OR), !(NOT)
�� ���� ������ AND, OR�� ������ �� ���

��, ���� ����� ������ : ����, ���ɴ� ���� �������� ����� �ο�
&& : �ΰ��� ������ ��� ���϶� ���̴�.
|| : �ΰ��� �߿� �ϳ��� ���̸� ���̴�.
! : ���� (��->����, ����->��)
*/

#include	<stdio.h>

int main_Logical(void) {
	int age = 25;
	int gender = 1;	// 1:����, 0:����

	if (age >= 10 && age < 20)	// 10�� 
		printf("10��\n");
	else if (gender == 1 || age > 40)
		printf("�׳�\n");
	gender = !gender;	// -> ����
	int run = 1;
	while (run) {	// �ݺ��� : ������ �� �϶� ��� �ݺ��ؼ� ����
		if (age > 30)
			run = !run;	// 1-> 0	// �ݺ����� �����ϱ� ���� ����(0)
	}

	// �޸�(,) ������
	int a=10, b=10;
	int c=10;
	printf("a"), printf("b");
	printf("a");
	printf("b");
	printf("%d %d %d\n", a, b, c);
}
