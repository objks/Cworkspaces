// other.c ���Ͽ��� global.c�� �����
// num�� ����ϰ� �ʹ�.
extern int num;	// extern : �ٸ� ���Ͽ� num ������ �����Ѵ�.
// extern static int total;	// static�� �Ұ�

void callFuncTwo() {
	int var2 = num + 60;	// num? -> extern�� ����ؼ� ���縦 �˸���.
//	int var3 = total - 40;	// total�� ���� �Ұ���
}