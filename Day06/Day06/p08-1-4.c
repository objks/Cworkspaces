/*
���׽�
if(a>b)
	printf("%d\n", a - b);
else
	printf("%d\n", b - a);
->
(a > b) ? printf("%d\n", a - b) : printf("%d\n", b - a);
*/

#include	<stdio.h>

int main08_1_4(void) {
	// �� ���� ������ �Է�
	// ���� ����
	int a, b;
	// �Է�
	printf("�� ���� ���� �Է� : ");
	scanf("%d%d", &a, &b);
	// �� ���� ���� ���
	/*
	int diff;
	if (a > b)
		diff = a - b;
	else
		diff = b - a;
	// ��� ���
	printf("%d\n", diff);
	*/

	// ���׽�
	(a > b) ? printf("%d\n", a - b) : printf("%d\n", b - a);

	return 0;
}

/*
// ���� : ��� ��츦 Ȯ��
1. ù��° > �ι�°
2. ù��° < �ι�°
3. ù��° == �ι�°
*/

/*
(���ǽ�) ? ���๮1 : ���๮2;
(���ǽ�1) ? (���ǽ�2) ? ���๮1: ���๮2 : ���๮3;
*/