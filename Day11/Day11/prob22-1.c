/*
���� 22-1 [����ü�� ����]

���ڿ� ������ "������ �̸�"�� ���ڿ� ������ "�ֹε�Ϲ�ȣ"
 �׸��� ���� ������ "�޿�����"�� �����ϴ� employee��� �̸���
 ����ü�� �����غ���. �׸����� employee ����ü ������ �ϳ�
 ������ ����, ���α׷� ����ڰ� �Է��ϴ� ������ �� ������ ä����.
 �׸��� ���������� ����ü ������ ä���� �����͸� ����� ����.
*/

#include	<stdio.h>
#include	"define.h"

int main_prob221(void) {
	struct employee p1;

	printf("�̸�: ");
	scanf("%s", p1.name);
	printf("�ֹε�Ϲ�ȣ: ");
	scanf("%s", p1.ssn);
	printf("�޿�����: ");
	scanf("%d", &p1.salary);

	printf("�̸�: %s\n", p1.name);
	printf("�ֹε�Ϲ�ȣ: %s\n", p1.ssn);
	printf("�޿�����: %d\n", p1.salary);
	return 0;
}