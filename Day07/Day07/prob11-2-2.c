/*
���� 2. ���α׷� ����ڷκ��� ���ܾ �Է� �޾Ƽ� char��
	�迭�� �����Ѵ�. �� ���� �迭�� ����� ���ܾ ��������
	�����´�. ���� �̶��� ��('\0') ������ ��ġ�� �����ؼ���
	�ȵȴ�. ������ ������ ����� ������ ������ Ȯ���ϱ� ���ؼ�
	����� ����. ��) "hello" -> 'olleh"
*/

#include	<stdio.h>

extern int strlen(char arr[]);	// prob11-1-1-2.c�� �ִ� strlen �Լ��� �̿��� �� extern

int main_prob11_2_2(void) {
	char buffer[256];

	printf("�ܾ� �Է� : ");
	scanf("%s", buffer);	// �ܾ� �Է�
	int len = strlen(buffer);
	for (int i = 0; i < len / 2; i++) {	// �ݸ� ��Ī�ǰ� ��ȯ
		char tmp = buffer[i];			// buffer[i]�� buffer[len - 1 -i] ��ȯ
		buffer[i] = buffer[len - 1 - i];
		buffer[len - 1 - i] = tmp;
	}
	printf("%s\n", buffer);
	return 0;
}