/*
���� 22-2 [����ü �迭�� ����]
�ռ� ���� 22-1���� ������ employee ����ü�� ������� ���̰� 3��
 �迭�� ��������. �׸��� �� ���� ������ ���α׷� ����ڷκ���
�Է� �޾Ƽ� �迭�� ������ ����, �迭�� ������ �����͸� �������
 ����ϴ� ������ �ۼ��� ����.
*/

#include	<stdio.h>
#include	"define.h"	// ����ü ����, ��� ����
#define	MAX	3	// ��� ���� : preprocessor (10->3)
/*
struct employee {
	char name[20];
	char ssn[20];
	int salary;
};
*/

int main_prob222(void) {
	int i;
	struct employee p1[MAX];

	for (i = 0; i < MAX; i++) {
		printf("�̸�: ");
		scanf("%s", p1[i].name);
		printf("�ֹε�Ϲ�ȣ: ");
		scanf("%s", p1[i].ssn);
		printf("�޿�����: ");
		scanf("%d", &p1[i].salary);
	}
	
	for (i = 0; i < MAX; i++) {
		printf("�̸�: %s\n", p1[i].name);
		printf("�ֹε�Ϲ�ȣ: %s\n", p1[i].ssn);
		printf("�޿�����: %d\n", p1[i].salary);
	}
	
	return 0;
}