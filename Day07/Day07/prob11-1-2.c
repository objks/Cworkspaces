/*
���� 2. char�� 1���� �迭�� ����� ���ÿ� ���� ������ ��������
	�ʱ�ȭ�ϰ�, �ʱ�ȭ ���Ŀ��� ����� ������ ����ϴ� ������
	�ۼ��� ����. -> �ݺ����� ����ؼ� �� ���ھ� ���
	"Good time" -> ���ڿ��� '\0' -> �迭�� ũ��� 10
*/

#include	<stdio.h>
//#include	<string.h>	// ���ڿ��� �����ϴ� ���̺귯��
	// strlen : ���ڿ��� ����
	// strcmp : string compare ���ڿ� ��
	// strcpy : string copy ���ڿ� ���� A->B (������ �ִ� B�� ������ ��������.)
	// strcat : string concaternation(?) A->B�߰��ؼ� �����δ�. (B�� ������ ����)

int strlen(char* buffer) {
	// strlen : string length ���ڿ��� ���̸� ���ϴ� �Լ�
	int i;
	for (i = 0; buffer[i] != '\0'; i++)
		;
	return i;
}

int main_prob_11_1_2(void) {
	char buffer[] = "Good time";	// "Good time\0"
	// buffer[i] != '\0'
	for (int i = 0; buffer[i] != '\0'; i++)
		printf("%c", buffer[i]);
	printf("\n");

	for (int i = 0; i < strlen(buffer); i++)	// strlen �Լ� ��� ��
		printf("%c", buffer[i]);
	printf("\n");
}
// �迭�� ũ�� : sizeof(buffer) -> �� ����Ʈ����? �� �ʿ� ����
