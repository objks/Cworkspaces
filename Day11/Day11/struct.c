/*
����ü
�������� �����͸� ���� ��
*/

#include	<stdio.h>
// ����ü ���� : ����� ���� ������ Ÿ��
struct point {	// ��ǥ���� �����ϴ� ����ü
	int xpos;	// x ��ǥ��
	int ypos;	// y ��ǥ��
} p1, p2, p3, p4;

struct person {	// ��� ������ �����ϴ� ����� ������ Ÿ�� : ����ü
	// ���
	char name[20];	// �ѱ� 1�� : 3byte
	char phoneNum[20];	// ��ȭ��ȣ 010
	int age;
	char ssn[15];	// ��� �ʿ�� ����� �߰�
} lee, choi;

int main_struct(void) {
	int num;	// int: ������ Ÿ��, num: ���� �̸�
	// ���� ��ǥ�� �д´�.
	struct point left;	// ������ Ÿ��: struct point, �����̸�: left
	struct point right;

	printf("��ǥ�� �Է��ϼ���(20 30) : ");
	scanf("%d %d", &left.xpos, &left.ypos);	// �����̸�.����̸�
	printf("��ǥ�� �Է��ϼ���(20 30) : ");
	scanf("%d %d", &right.xpos, &right.ypos);
	printf("left ��ǥ�� : (%d, %d)\n", left.xpos, left.ypos);
	printf("right ��ǥ�� : (%d, %d)\n", right.xpos, right.ypos);

	// ȫ�浿�� ���� �Է�
	struct person hong;	// ������ Ÿ��(struct person) �����̸�(hong)
	printf("�̸� : ");
	scanf("%s", hong.name);	// hong.name : �ּ�
	printf("��ȭ��ȣ : ");
	scanf("%s", hong.phoneNum);
	printf("���� : ");
	scanf("%d", &hong.age);
	printf("�ֹε�Ϲ�ȣ : ");
	scanf("%s", hong.ssn);
	printf("�̸� : %s\n", hong.name);
	printf("��ȭ��ȣ : %s\n", hong.phoneNum);
	printf("���� : %d\n", hong.age);
	printf("�ֹε�Ϲ�ȣ : %s\n", hong.ssn);

	return 0;
}