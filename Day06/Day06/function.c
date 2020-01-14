/*
�Լ� : function

��ȯ�� �Լ��̸�(�Ű�����) {	// '{' �Լ��� ����
	���๮;
	return value;	// ��ȯ���� �����ϸ� ����ϰ�
					// ��ȯ���� void�� ��� ����
} // '}' �Լ��� ��

��ȯ�� : �Ϲ����� ������ Ÿ�� (int, char, short, long, float,...)
�Լ��̸� : ���� �ҹ��ڷ� ����, �ܾ��� ������ ��� �ι�° �ܾ���ʹ�
	�빮�ڷ�, �ߺ��Ǹ� �ȵ�
�Ű����� : �ʿ信 ���� 0~�� ���� ����
	������Ÿ�� �����̸�, ������Ÿ�� �����̸�, ...
return : ��ȯ���� ������ ��� �ʼ� (��ȯ���� ������Ÿ�԰� ���� ������ ��ȯ)
�� ���� ���� ���ϴ� ���α׷�
*/

#include	<stdio.h>

// �Լ��� ��ġ : ��� 1 ȣ���ϴ� ��ġ���� �Լ��� ���Ǻκ��� �տ� ����
void showHelp(void) {	// ��ȯ�� ����, �Ű����� ����
	printf("�� ���� ���� �Է� : ");
}

// ��� 2���� �ؾ��� �� : �Լ��� ���� ������ ����
int getNumber();	// ����ΰ� ���� ���� (��ȯ��, �Ű�����, �Լ��̸�)

int add(int num1, int num2) {	// �Ű������� ��ȯ���� �ִ� ���
	return num1 + num2;
}

void printResult(int, int, int);	// �Ű����� �̸��� ���� ����

int main_function(void) {
	int num1, num2;
	// printf("�� ���� ���� �Է� : ");
	showHelp();	// ������ ����ϴ� �Լ�

	// scanf("%d %d", &num1, &num2);
	num1 = getNumber();	// ���� �� ���� �о� �´�.
	num2 = getNumber();	// ���� ����� �Լ��� ȣ�� -> �ڵ��� �ߺ��� ����
	// ��ɺ��� ���ȭ (ū ���α׷�)

	// int sum = num1 + num2;
	int sum = add(num1, num2);

	// printf("%d + %d = %d\n", num1, num2, sum);
	printResult(num1, num2, sum);
	return 0;
}

void printResult(int a, int b, int c) {
	printf("%d + %d = %d\n", a, b, c);
}

/*
// ��� 2
void showHelp() {

}
*/

// ��� 2 : ȣ���ϴ� ��ġ(31 ��)���� ��(46 ��)�� �Լ��� ����
int getNumber() {
	int num;
	scanf("%d", &num);
	return num;	// ���� ȣ���� ������ ���� ��ȯ
}
