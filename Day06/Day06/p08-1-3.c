/*
���� 3. �л��� ��ü ��������� ���� ������ ����ϴ� ���α׷���
	�ۼ�����. �л��� ������ 90�� �̻��̸� A, 80�� �̻��̸� B,
	70�� �̻��̸� C, 50�� �̻��̸� D �׸��� �� �̸��̸� F��!
	���α׷� ���� �� ������� ����, ����, ���� ������ �Է� ��
	�´�. �׸���� ����� ���� ���� �׿� ������ ������ ����ϸ�
	�ȴ�.
*/

#include	<stdio.h>

int main_080103(void) {
	// ����, ����, ���� �Է�
	int kor, eng, math;
	printf("���� : ");
	scanf("%d", &kor);
	printf("���� : ");
	scanf("%d", &eng);
	printf("���� : ");
	scanf("%d", &math);

	int total = kor + eng + math;
	int mean = total / 3;	// ���� : �Ҽ����� ����
	double avg = (double)total / 3;	// �Ҽ�������

	if (mean >= 90) {
		printf("A\n");
	}
	else if (mean >= 80) {
		printf("B\n");
	}
	else if (mean >= 70) {
		printf("C\n");
	}
	else if (mean >= 50) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}

	/* -> if���ٴ� else if�� ����ϴ°� ȿ����
	if (mean >= 90) {
		printf("A\n");
	}
	if (mean >= 80 && mean < 90) {
		printf("B\n");
	}
	*/
	
	return 0;
}